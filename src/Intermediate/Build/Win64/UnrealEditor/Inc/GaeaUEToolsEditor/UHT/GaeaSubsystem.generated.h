// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GaeaSubsystem.h"

#ifdef GAEAUETOOLSEDITOR_GaeaSubsystem_generated_h
#error "GaeaSubsystem.generated.h already included, missing '#pragma once' in GaeaSubsystem.h"
#endif
#define GAEAUETOOLSEDITOR_GaeaSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ALandscape;
class ALandscapeProxy;
class UGaeaSubsystem;
class UImporterPanelSettings;
class ULandscapeInfo;
class UMaterialExpressionLandscapeLayerBlend;
class UMaterialInterface;
struct FGaeaJson;

// ********** Begin ScriptStruct FGaeaJson *********************************************************
#define FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGaeaJson_Statics; \
	GAEAUETOOLSEDITOR_API static class UScriptStruct* StaticStruct();


struct FGaeaJson;
// ********** End ScriptStruct FGaeaJson ***********************************************************

// ********** Begin Class UGaeaSubsystem ***********************************************************
#define FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLandscapeActorProxies); \
	DECLARE_FUNCTION(execGetLandscapeLayerBlendNames); \
	DECLARE_FUNCTION(execGetLandscapeLayerBlendNodes); \
	DECLARE_FUNCTION(execCreateLandscapeActor); \
	DECLARE_FUNCTION(execGetLandscape); \
	DECLARE_FUNCTION(execCreateStructFromJson); \
	DECLARE_FUNCTION(execReadStringFromFile); \
	DECLARE_FUNCTION(execImportHeightmap); \
	DECLARE_FUNCTION(execReimportGaeaWPTerrain); \
	DECLARE_FUNCTION(execReimportGaeaTerrain); \
	DECLARE_FUNCTION(execSpawnGImporterWindow); \
	DECLARE_FUNCTION(execGetGaeaSubsystem);


GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGaeaSubsystem_NoRegister();

#define FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGaeaSubsystem(); \
	friend struct Z_Construct_UClass_UGaeaSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGaeaSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UGaeaSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GaeaUEToolsEditor"), Z_Construct_UClass_UGaeaSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UGaeaSubsystem)


#define FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGaeaSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGaeaSubsystem(UGaeaSubsystem&&) = delete; \
	UGaeaSubsystem(const UGaeaSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGaeaSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGaeaSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGaeaSubsystem) \
	NO_API virtual ~UGaeaSubsystem();


#define FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_48_PROLOG
#define FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_51_INCLASS_NO_PURE_DECLS \
	FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGaeaSubsystem;

// ********** End Class UGaeaSubsystem *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
