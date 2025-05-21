// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRPassthroughColorLut.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
#ifdef OCULUSXRPASSTHROUGH_OculusXRPassthroughColorLut_generated_h
#error "OculusXRPassthroughColorLut.generated.h already included, missing '#pragma once' in OculusXRPassthroughColorLut.h"
#endif
#define OCULUSXRPASSTHROUGH_OculusXRPassthroughColorLut_generated_h

#define FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLutTextureData_Statics; \
	OCULUSXRPASSTHROUGH_API static class UScriptStruct* StaticStruct();


template<> OCULUSXRPASSTHROUGH_API UScriptStruct* StaticStruct<struct FLutTextureData>();

#define FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLutFromArray);


#define FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRPassthroughColorLut(); \
	friend struct Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics; \
public: \
	DECLARE_CLASS(UOculusXRPassthroughColorLut, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRPassthroughColorLut)


#define FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRPassthroughColorLut(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusXRPassthroughColorLut(UOculusXRPassthroughColorLut&&); \
	UOculusXRPassthroughColorLut(const UOculusXRPassthroughColorLut&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRPassthroughColorLut); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRPassthroughColorLut); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRPassthroughColorLut) \
	NO_API virtual ~UOculusXRPassthroughColorLut();


#define FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_59_PROLOG
#define FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_62_INCLASS_NO_PURE_DECLS \
	FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRPASSTHROUGH_API UClass* StaticClass<class UOculusXRPassthroughColorLut>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h


#define FOREACH_ENUM_ECOLORLUTTYPE(op) \
	op(EColorLutType::None) \
	op(EColorLutType::TextureLUT) \
	op(EColorLutType::Array) 

enum class EColorLutType : uint8;
template<> struct TIsUEnumClass<EColorLutType> { enum { Value = true }; };
template<> OCULUSXRPASSTHROUGH_API UEnum* StaticEnum<EColorLutType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
