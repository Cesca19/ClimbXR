// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRInput/Public/OculusXRControllerLegacyPoseTransformComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRControllerLegacyPoseTransformComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent();
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusXRInput();
// End Cross Module References

// Begin Class UOculusXRControllerLegacyPoseTransformComponent
void UOculusXRControllerLegacyPoseTransformComponent::StaticRegisterNativesUOculusXRControllerLegacyPoseTransformComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRControllerLegacyPoseTransformComponent);
UClass* Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_NoRegister()
{
	return UOculusXRControllerLegacyPoseTransformComponent::StaticClass();
}
struct Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusHand" },
		{ "Comment", "/**\n * This class is deprecated, please use OculusXRLegacyPoseTransformComponent instead.\n */" },
		{ "DeprecationMessage", "Please use OculusXRLegacyPoseTransformComponent instead." },
		{ "DisplayName", "[Deprecated] OculusXR Controller Legacy Pose Transform Component" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OculusXRControllerLegacyPoseTransformComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRControllerLegacyPoseTransformComponent.h" },
		{ "ToolTip", "This class is deprecated, please use OculusXRLegacyPoseTransformComponent instead." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRControllerLegacyPoseTransformComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_Statics::ClassParams = {
	&UOculusXRControllerLegacyPoseTransformComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent.OuterSingleton, Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent.OuterSingleton;
}
template<> OCULUSXRINPUT_API UClass* StaticClass<UOculusXRControllerLegacyPoseTransformComponent>()
{
	return UOculusXRControllerLegacyPoseTransformComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRControllerLegacyPoseTransformComponent);
UOculusXRControllerLegacyPoseTransformComponent::~UOculusXRControllerLegacyPoseTransformComponent() {}
// End Class UOculusXRControllerLegacyPoseTransformComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRInput_Public_OculusXRControllerLegacyPoseTransformComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent, UOculusXRControllerLegacyPoseTransformComponent::StaticClass, TEXT("UOculusXRControllerLegacyPoseTransformComponent"), &Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRControllerLegacyPoseTransformComponent), 3471458306U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRInput_Public_OculusXRControllerLegacyPoseTransformComponent_h_2376241324(TEXT("/Script/OculusXRInput"),
	Z_CompiledInDeferFile_FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRInput_Public_OculusXRControllerLegacyPoseTransformComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRInput_Public_OculusXRControllerLegacyPoseTransformComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
