// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GMCSettings.h"

#ifdef GAEAUETOOLSEDITOR_GMCSettings_generated_h
#error "GMCSettings.generated.h already included, missing '#pragma once' in GMCSettings.h"
#endif
#define GAEAUETOOLSEDITOR_GMCSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGaeaLandscapeSetting *********************************************
#define FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics; \
	static class UScriptStruct* StaticStruct();


struct FGaeaLandscapeSetting;
// ********** End ScriptStruct FGaeaLandscapeSetting ***********************************************

// ********** Begin Class UGMCSettings *************************************************************
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGMCSettings_NoRegister();

#define FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGMCSettings(); \
	friend struct Z_Construct_UClass_UGMCSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGMCSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGMCSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GaeaUEToolsEditor"), Z_Construct_UClass_UGMCSettings_NoRegister) \
	DECLARE_SERIALIZER(UGMCSettings)


#define FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGMCSettings(UGMCSettings&&) = delete; \
	UGMCSettings(const UGMCSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGMCSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGMCSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGMCSettings)


#define FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_48_PROLOG
#define FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_51_INCLASS_NO_PURE_DECLS \
	FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGMCSettings;

// ********** End Class UGMCSettings ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h

// ********** Begin Enum ELandscapeBlendLayersType *************************************************
#define FOREACH_ENUM_ELANDSCAPEBLENDLAYERSTYPE(op) \
	op(ELandscapeBlendLayersType::LB_WeightedBlend) \
	op(ELandscapeBlendLayersType::LB_AlphaBlends) \
	op(ELandscapeBlendLayersType::LB_HeightBlends) 

enum class ELandscapeBlendLayersType : uint8;
template<> struct TIsUEnumClass<ELandscapeBlendLayersType> { enum { Value = true }; };
template<> GAEAUETOOLSEDITOR_API UEnum* StaticEnum<ELandscapeBlendLayersType>();
// ********** End Enum ELandscapeBlendLayersType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
