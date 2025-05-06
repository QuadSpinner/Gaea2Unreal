// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GaeaSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALandscape;
class UGaeaSubsystem;
class UImporterPanelSettings;
class ULandscapeInfo;
class UMaterialExpressionLandscapeLayerBlend;
class UMaterialInterface;
struct FGaeaJson;
#ifdef GAEAUETOOLSEDITOR_GaeaSubsystem_generated_h
#error "GaeaSubsystem.generated.h already included, missing '#pragma once' in GaeaSubsystem.h"
#endif
#define GAEAUETOOLSEDITOR_GaeaSubsystem_generated_h

#define FID_PeacefulLife_Plugins_Gaea2Unreal_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGaeaJson_Statics; \
	GAEAUETOOLSEDITOR_API static class UScriptStruct* StaticStruct();


template<> GAEAUETOOLSEDITOR_API UScriptStruct* StaticStruct<struct FGaeaJson>();

#define FID_PeacefulLife_Plugins_Gaea2Unreal_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FID_PeacefulLife_Plugins_Gaea2Unreal_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGaeaSubsystem(); \
	friend struct Z_Construct_UClass_UGaeaSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGaeaSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GaeaUEToolsEditor"), NO_API) \
	DECLARE_SERIALIZER(UGaeaSubsystem)


#define FID_PeacefulLife_Plugins_Gaea2Unreal_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGaeaSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGaeaSubsystem(UGaeaSubsystem&&); \
	UGaeaSubsystem(const UGaeaSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGaeaSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGaeaSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGaeaSubsystem) \
	NO_API virtual ~UGaeaSubsystem();


#define FID_PeacefulLife_Plugins_Gaea2Unreal_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_45_PROLOG
#define FID_PeacefulLife_Plugins_Gaea2Unreal_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PeacefulLife_Plugins_Gaea2Unreal_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PeacefulLife_Plugins_Gaea2Unreal_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_48_INCLASS_NO_PURE_DECLS \
	FID_PeacefulLife_Plugins_Gaea2Unreal_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAEAUETOOLSEDITOR_API UClass* StaticClass<class UGaeaSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PeacefulLife_Plugins_Gaea2Unreal_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
