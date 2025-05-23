// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRSceneEventDelegates.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOculusXRBoundaryVisibility : uint8;
#ifdef OCULUSXRSCENE_OculusXRSceneEventDelegates_generated_h
#error "OculusXRSceneEventDelegates.generated.h already included, missing '#pragma once' in OculusXRSceneEventDelegates.h"
#endif
#define OCULUSXRSCENE_OculusXRSceneEventDelegates_generated_h

#define FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneEventDelegates_h_10_DELEGATE \
OCULUSXRSCENE_API void FOculusXRScene_BoundaryVisibilityChanged_DelegateWrapper(const FMulticastScriptDelegate& OculusXRScene_BoundaryVisibilityChanged, EOculusXRBoundaryVisibility BoundaryVisibility);


#define FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneEventDelegates_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRSceneEventDelegates(); \
	friend struct Z_Construct_UClass_UOculusXRSceneEventDelegates_Statics; \
public: \
	DECLARE_CLASS(UOculusXRSceneEventDelegates, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRScene"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRSceneEventDelegates)


#define FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneEventDelegates_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRSceneEventDelegates(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusXRSceneEventDelegates(UOculusXRSceneEventDelegates&&); \
	UOculusXRSceneEventDelegates(const UOculusXRSceneEventDelegates&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRSceneEventDelegates); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRSceneEventDelegates); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRSceneEventDelegates) \
	NO_API virtual ~UOculusXRSceneEventDelegates();


#define FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneEventDelegates_h_12_PROLOG
#define FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneEventDelegates_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneEventDelegates_h_15_INCLASS_NO_PURE_DECLS \
	FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneEventDelegates_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRSCENE_API UClass* StaticClass<class UOculusXRSceneEventDelegates>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneEventDelegates_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
