// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimTypes.h"
#include "LiveLinkRetargetAsset.h"
#include "Containers/StaticArray.h"
#include "OculusXRMovementTypes.h"
#include "Misc/EngineVersionComparison.h"
#include "OculusXRAnimCurveMapping.h"

#include "OculusXRLiveLinkRetargetFaceVisemesAsset.generated.h"

UCLASS(Blueprintable, meta = (DisplayName = "MetaXR MovementSDK LiveLink retarget face visemes asset"), ClassGroup = OculusXRHMD)
class OCULUSXRMOVEMENT_API UOculusXRLiveLinkRetargetFaceVisemesAsset : public ULiveLinkRetargetAsset
{
	GENERATED_UCLASS_BODY()

	virtual void Initialize() override;
	virtual void BuildPoseAndCurveFromBaseData(float DeltaTime, const FLiveLinkBaseStaticData* InBaseStaticData, const FLiveLinkBaseFrameData* InBaseFrameData, FCompactPose& OutPose, FBlendedCurve& OutCurve) override;

	/**
	 * Map face expression to Skeleton's animation curve mapping names.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "OculusXR|Movement")
	TMap<EOculusXRFaceVisemesExpression, FOculusXRAnimCurveMapping> CurveRemapping;

private:
	// Latest skeleton used to build pose
	FGuid LastSkeletonGuid;

	// Remapping used for latest used skeleton
#if UE_VERSION_OLDER_THAN(5, 3, 0)
	TStaticArray<TArray<SmartName::UID_Type>, static_cast<uint8>(EOculusXRFaceVisemesExpression::COUNT)> RemappingForLastSkeleton;
#else
	TStaticArray<TArray<FName>, static_cast<uint8>(EOculusXRFaceVisemesExpression::COUNT)> RemappingForLastSkeleton;
#endif

	// Recalculate skeleton dependent mappings
	void OnSkeletonChanged(const USkeleton* Skeleton);
};
