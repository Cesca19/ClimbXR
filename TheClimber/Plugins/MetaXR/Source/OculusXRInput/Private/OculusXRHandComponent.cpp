// @lint-ignore-every LICENSELINT
// Copyright Epic Games, Inc. All Rights Reserved.
#include "OculusXRHandComponent.h"
#include "OculusXRInput.h"
#include "OculusXRInputModule.h"
#include "OpenXR/OculusXROpenXRUtilities.h"

#include "Engine/SkeletalMesh.h"
#include "Components/InputComponent.h"
#include "Materials/MaterialInterface.h"

#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"

UOculusXRHandComponent::UOculusXRHandComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
	PrimaryComponentTick.TickGroup = TG_PrePhysics;

	bHasAuthority = false;
	bAutoActivate = true;

	bWantsInitializeComponent = true;

	for (uint8 BoneIndex = 0; BoneIndex < (uint8)EOculusXRBone::Bone_Max; BoneIndex++)
	{
		BoneNameMappings.Add((EOculusXRBone)BoneIndex, TEXT(""));
	}
}

void UOculusXRHandComponent::BeginPlay()
{
	Super::BeginPlay();

	// Use custom mesh if a skeletal mesh is already set, else try to load the runtime mesh
	if (GetSkinnedAsset())
	{
		bCustomHandMesh = true;
		bSkeletalMeshInitialized = true;
	}
	else
	{
		RuntimeSkeletalMesh = NewObject<USkeletalMesh>(this, TEXT("OculusHandMesh"));
		InitializeSkeletalMesh();
	}
}

void UOculusXRHandComponent::InitializeSkeletalMesh()
{
	const FOculusXRInputModule* InputModule = static_cast<FOculusXRInputModule*>(&FOculusXRInputModule::Get());
	if (OculusXR::IsOpenXRSystem() && !InputModule->GetHandTrackingOpenXRExtension()->bIsInitialized)
	{
		return;
	}

	if (RuntimeSkeletalMesh)
	{
		if (UOculusXRInputFunctionLibrary::GetHandSkeletalMesh(RuntimeSkeletalMesh, SkeletonType, MeshType))
		{
			SetSkinnedAssetAndUpdate(RuntimeSkeletalMesh, true);
			if (MaterialOverride)
			{
				SetMaterial(0, MaterialOverride);
			}
			CachedBaseMaterial = GetMaterial(0);
			bSkeletalMeshInitialized = true;

			// Initialize physics capsules on the runtime mesh
			if (bInitializePhysics)
			{
				CollisionCapsules = UOculusXRInputFunctionLibrary::InitializeHandPhysics(SkeletonType, this);
			}
		}
	}
}

void UOculusXRHandComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

#if WITH_EDITOR
	if (!bSkeletalMeshInitialized && !bCustomHandMesh)
	{
		InitializeSkeletalMesh();
	}
#else
	// OpenXR session is created after the hand component is initialized
	if (OculusXR::IsOpenXRSystem() && !bSkeletalMeshInitialized && !bCustomHandMesh)
	{
		InitializeSkeletalMesh();
	}
#endif

	if (IsInGameThread())
	{
		// Cache state from the game thread for use on the render thread
		const AActor* MyOwner = GetOwner();
		bHasAuthority = MyOwner->HasLocalNetOwner();
		int i = 0;
	}

	if (bHasAuthority)
	{
		bool bHidden = false;
		if (UOculusXRInputFunctionLibrary::IsHandTrackingEnabled())
		{
			// Update Visibility based on Confidence
			if (ConfidenceBehavior == EOculusXRConfidenceBehavior::HideActor)
			{
				EOculusXRTrackingConfidence TrackingConfidence = UOculusXRInputFunctionLibrary::GetTrackingConfidence(SkeletonType);
				bHidden |= TrackingConfidence != EOculusXRTrackingConfidence::High;
			}

			// Update Hand Scale
			if (bUpdateHandScale)
			{
				float NewScale = UOculusXRInputFunctionLibrary::GetHandScale(SkeletonType);
				SetRelativeScale3D(FVector(NewScale));
			}

			// Update Bone Pose Rotations
			if (GetSkinnedAsset())
			{
				UpdateBonePose(SkeletonType);
			}

#if OCULUS_INPUT_SUPPORTED_PLATFORMS
			// Check for system gesture pressed through player controller
			if (APawn* Pawn = Cast<APawn>(GetOwner()))
			{
				if (APlayerController* PC = Pawn->GetController<APlayerController>())
				{
					if (PC->WasInputKeyJustPressed(SkeletonType == EOculusXRHandType::HandLeft ? OculusXRInput::FOculusKey::OculusHand_Left_SystemGesture : OculusXRInput::FOculusKey::OculusHand_Right_SystemGesture))
					{
						SystemGesturePressed();
					}
					if (PC->WasInputKeyJustReleased(SkeletonType == EOculusXRHandType::HandLeft ? OculusXRInput::FOculusKey::OculusHand_Left_SystemGesture : OculusXRInput::FOculusKey::OculusHand_Right_SystemGesture))
					{
						SystemGestureReleased();
					}
				}
			}
#endif
		}
		else
		{
			bHidden = true;
		}

		if (bHidden != bHiddenInGame)
		{
			SetHiddenInGame(bHidden);
			for (int32 i = 0; i < CollisionCapsules.Num(); i++)
			{
				CollisionCapsules[i].Capsule->SetCollisionEnabled(bHidden ? ECollisionEnabled::NoCollision : ECollisionEnabled::QueryAndPhysics);
			}
		}
	}
}

void UOculusXRHandComponent::UpdateBonePose(EOculusXRHandType HandType)
{
	FQuat HandRootFixupRotation = HandRootFixupRotationOVR;
	if (OculusXR::IsOpenXRSystem())
	{
		check(HandType == EOculusXRHandType::HandLeft || HandType == EOculusXRHandType::HandRight);
		if (HandType == EOculusXRHandType::HandLeft)
		{
			HandRootFixupRotation = LeftHandRootFixupRotationOpenXR;
		}
		else if (HandType == EOculusXRHandType::HandRight)
		{
			HandRootFixupRotation = RightHandRootFixupRotationOpenXR;
		}
	}

	if (bCustomHandMesh)
	{
		for (auto& BoneElem : BoneNameMappings)
		{
			// Set Root Bone Rotaiton
			if (BoneElem.Key == EOculusXRBone::Wrist_Root)
			{
				FQuat RootBoneRotation = UOculusXRInputFunctionLibrary::GetBoneRotation(SkeletonType, EOculusXRBone::Wrist_Root);
				RootBoneRotation *= HandRootFixupRotation;
				RootBoneRotation.Normalize();
				BoneSpaceTransforms[0].SetRotation(RootBoneRotation);
			}
			else
			{
				// Set Remaing Bone Rotations
				int32 BoneIndex = GetSkinnedAsset()->GetRefSkeleton().FindBoneIndex(BoneElem.Value);
				if (BoneIndex >= 0)
				{
					FQuat BoneRotation = UOculusXRInputFunctionLibrary::GetBoneRotation(SkeletonType, (EOculusXRBone)BoneElem.Key);
					BoneSpaceTransforms[BoneIndex].SetRotation(BoneRotation);
				}
			}
		}
	}
	else
	{
		// Set Root Bone Rotation
		FQuat RootBoneRotation = UOculusXRInputFunctionLibrary::GetBoneRotation(SkeletonType, EOculusXRBone::Wrist_Root);
		RootBoneRotation *= HandRootFixupRotation;
		RootBoneRotation.Normalize();
		BoneSpaceTransforms[0].SetRotation(RootBoneRotation);

		// Set Remaining Bone Rotations
		for (uint32 BoneIndex = 1; BoneIndex < (uint32)GetSkinnedAsset()->GetRefSkeleton().GetNum(); BoneIndex++)
		{
			FQuat BoneRotation = UOculusXRInputFunctionLibrary::GetBoneRotation(SkeletonType, (EOculusXRBone)BoneIndex);
			BoneSpaceTransforms[BoneIndex].SetRotation(BoneRotation);
		}
	}
	MarkRefreshTransformDirty();
}

void UOculusXRHandComponent::SystemGesturePressed()
{
	if (SystemGestureBehavior == EOculusXRSystemGestureBehavior::SwapMaterial)
	{
		if (SystemGestureMaterial)
		{
			SetMaterial(0, SystemGestureMaterial);
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("System Gesture Behavior was set to Swap Material but no System Gesture Material was provided!"));
		}
	}
}

void UOculusXRHandComponent::SystemGestureReleased()
{
	if (SystemGestureBehavior == EOculusXRSystemGestureBehavior::SwapMaterial)
	{
		if (CachedBaseMaterial)
		{
			SetMaterial(0, CachedBaseMaterial);
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("System Gesture Behavior was set to Swap Material but no System Gesture Material was provided!"));
		}
	}
}
