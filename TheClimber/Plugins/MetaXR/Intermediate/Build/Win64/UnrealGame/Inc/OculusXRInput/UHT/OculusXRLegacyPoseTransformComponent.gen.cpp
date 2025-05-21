// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRInput/Public/OculusXRLegacyPoseTransformComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRLegacyPoseTransformComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent();
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusXRInput();
// End Cross Module References

// Begin Class UOculusXRLegacyPoseTransformComponent
void UOculusXRLegacyPoseTransformComponent::StaticRegisterNativesUOculusXRLegacyPoseTransformComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRLegacyPoseTransformComponent);
UClass* Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_NoRegister()
{
	return UOculusXRLegacyPoseTransformComponent::StaticClass();
}
struct Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusHand" },
		{ "Comment", "/**\n * Handles conversion of components created for the legacy Oculus controller pose into\n * the OpenXR Grip pose. Attach components that need to be transformed under this component.\n */" },
		{ "DisplayName", "OculusXR Legacy Pose Transform Component" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OculusXRLegacyPoseTransformComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRLegacyPoseTransformComponent.h" },
		{ "ToolTip", "Handles conversion of components created for the legacy Oculus controller pose into\nthe OpenXR Grip pose. Attach components that need to be transformed under this component." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRLegacyPoseTransformComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_Statics::ClassParams = {
	&UOculusXRLegacyPoseTransformComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent.OuterSingleton, Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent.OuterSingleton;
}
template<> OCULUSXRINPUT_API UClass* StaticClass<UOculusXRLegacyPoseTransformComponent>()
{
	return UOculusXRLegacyPoseTransformComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRLegacyPoseTransformComponent);
UOculusXRLegacyPoseTransformComponent::~UOculusXRLegacyPoseTransformComponent() {}
// End Class UOculusXRLegacyPoseTransformComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRInput_Public_OculusXRLegacyPoseTransformComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent, UOculusXRLegacyPoseTransformComponent::StaticClass, TEXT("UOculusXRLegacyPoseTransformComponent"), &Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRLegacyPoseTransformComponent), 362444847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRInput_Public_OculusXRLegacyPoseTransformComponent_h_2004647725(TEXT("/Script/OculusXRInput"),
	Z_CompiledInDeferFile_FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRInput_Public_OculusXRLegacyPoseTransformComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRInput_Public_OculusXRLegacyPoseTransformComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
