// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaeaSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGaeaSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGaeaSubsystem();
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGaeaSubsystem_NoRegister();
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UImporterPanelSettings_NoRegister();
GAEAUETOOLSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGaeaJson();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfo_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_NoRegister();
UPackage* Z_Construct_UPackage__Script_GaeaUEToolsEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FGaeaJson *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGaeaJson;
class UScriptStruct* FGaeaJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGaeaJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGaeaJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaeaJson, (UObject*)Z_Construct_UPackage__Script_GaeaUEToolsEditor(), TEXT("GaeaJson"));
	}
	return Z_Registration_Info_UScriptStruct_FGaeaJson.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGaeaJson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleX_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleY_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaeaJson>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGaeaJson_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaJson, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGaeaJson_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaJson, Resolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaeaJson_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaJson, ScaleX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleX_MetaData), NewProp_ScaleX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaeaJson_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaJson, ScaleY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleY_MetaData), NewProp_ScaleY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaeaJson_Statics::NewProp_ScaleZ = { "ScaleZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaJson, ScaleZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleZ_MetaData), NewProp_ScaleZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaeaJson_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaJson, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGaeaJson_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaJson, Unit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unit_MetaData), NewProp_Unit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaeaJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaeaJson_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaeaJson_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaeaJson_Statics::NewProp_ScaleX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaeaJson_Statics::NewProp_ScaleY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaeaJson_Statics::NewProp_ScaleZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaeaJson_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaeaJson_Statics::NewProp_Unit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaeaJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaeaJson_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GaeaUEToolsEditor,
	nullptr,
	&NewStructOps,
	"GaeaJson",
	Z_Construct_UScriptStruct_FGaeaJson_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaeaJson_Statics::PropPointers),
	sizeof(FGaeaJson),
	alignof(FGaeaJson),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaeaJson_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGaeaJson_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGaeaJson()
{
	if (!Z_Registration_Info_UScriptStruct_FGaeaJson.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGaeaJson.InnerSingleton, Z_Construct_UScriptStruct_FGaeaJson_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGaeaJson.InnerSingleton;
}
// ********** End ScriptStruct FGaeaJson ***********************************************************

// ********** Begin Class UGaeaSubsystem Function CreateLandscapeActor *****************************
struct Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor_Statics
{
	struct GaeaSubsystem_eventCreateLandscapeActor_Parms
	{
		UImporterPanelSettings* Settings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Creates a landscape actor from our panel settings.\n" },
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
		{ "ToolTip", "Creates a landscape actor from our panel settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventCreateLandscapeActor_Parms, Settings), Z_Construct_UClass_UImporterPanelSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaeaSubsystem, nullptr, "CreateLandscapeActor", Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor_Statics::GaeaSubsystem_eventCreateLandscapeActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor_Statics::GaeaSubsystem_eventCreateLandscapeActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaeaSubsystem::execCreateLandscapeActor)
{
	P_GET_OBJECT(UImporterPanelSettings,Z_Param_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateLandscapeActor(Z_Param_Settings);
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function CreateLandscapeActor *******************************

// ********** Begin Class UGaeaSubsystem Function CreateStructFromJson *****************************
struct Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics
{
	struct GaeaSubsystem_eventCreateStructFromJson_Parms
	{
		FString Path;
		bool bOutSuccess;
		FString OutMessage;
		FGaeaJson ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static void NewProp_bOutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMessage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventCreateStructFromJson_Parms, Path), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
{
	((GaeaSubsystem_eventCreateStructFromJson_Parms*)Obj)->bOutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GaeaSubsystem_eventCreateStructFromJson_Parms), &Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::NewProp_OutMessage = { "OutMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventCreateStructFromJson_Parms, OutMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventCreateStructFromJson_Parms, ReturnValue), Z_Construct_UScriptStruct_FGaeaJson, METADATA_PARAMS(0, nullptr) }; // 586650515
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::NewProp_bOutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::NewProp_OutMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaeaSubsystem, nullptr, "CreateStructFromJson", Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::GaeaSubsystem_eventCreateStructFromJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::GaeaSubsystem_eventCreateStructFromJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaeaSubsystem::execCreateStructFromJson)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGaeaJson*)Z_Param__Result=P_THIS->CreateStructFromJson(Z_Param_Path,Z_Param_Out_bOutSuccess,Z_Param_Out_OutMessage);
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function CreateStructFromJson *******************************

// ********** Begin Class UGaeaSubsystem Function GetGaeaSubsystem *********************************
struct Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem_Statics
{
	struct GaeaSubsystem_eventGetGaeaSubsystem_Parms
	{
		UGaeaSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Get instance of the Gaea Subsystem\n" },
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
		{ "ToolTip", "Get instance of the Gaea Subsystem" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetGaeaSubsystem_Parms, ReturnValue), Z_Construct_UClass_UGaeaSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaeaSubsystem, nullptr, "GetGaeaSubsystem", Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem_Statics::GaeaSubsystem_eventGetGaeaSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem_Statics::GaeaSubsystem_eventGetGaeaSubsystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaeaSubsystem::execGetGaeaSubsystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGaeaSubsystem**)Z_Param__Result=UGaeaSubsystem::GetGaeaSubsystem();
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function GetGaeaSubsystem ***********************************

// ********** Begin Class UGaeaSubsystem Function GetLandscape *************************************
struct Z_Construct_UFunction_UGaeaSubsystem_GetLandscape_Statics
{
	struct GaeaSubsystem_eventGetLandscape_Parms
	{
		ULandscapeInfo* LandscapeInfo;
		ALandscape* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscape_Statics::NewProp_LandscapeInfo = { "LandscapeInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetLandscape_Parms, LandscapeInfo), Z_Construct_UClass_ULandscapeInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetLandscape_Parms, ReturnValue), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaeaSubsystem_GetLandscape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_GetLandscape_Statics::NewProp_LandscapeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_GetLandscape_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_GetLandscape_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscape_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaeaSubsystem, nullptr, "GetLandscape", Z_Construct_UFunction_UGaeaSubsystem_GetLandscape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_GetLandscape_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaeaSubsystem_GetLandscape_Statics::GaeaSubsystem_eventGetLandscape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_GetLandscape_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaeaSubsystem_GetLandscape_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaeaSubsystem_GetLandscape_Statics::GaeaSubsystem_eventGetLandscape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_GetLandscape()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaeaSubsystem_GetLandscape_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaeaSubsystem::execGetLandscape)
{
	P_GET_OBJECT(ULandscapeInfo,Z_Param_LandscapeInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALandscape**)Z_Param__Result=P_THIS->GetLandscape(Z_Param_LandscapeInfo);
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function GetLandscape ***************************************

// ********** Begin Class UGaeaSubsystem Function GetLandscapeActorProxies *************************
struct Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics
{
	struct GaeaSubsystem_eventGetLandscapeActorProxies_Parms
	{
		ALandscape* Landscape;
		TArray<ALandscapeProxy*> LandscapeStreamingProxies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Landscape;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeStreamingProxies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeStreamingProxies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetLandscapeActorProxies_Parms, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics::NewProp_LandscapeStreamingProxies_Inner = { "LandscapeStreamingProxies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics::NewProp_LandscapeStreamingProxies = { "LandscapeStreamingProxies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetLandscapeActorProxies_Parms, LandscapeStreamingProxies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics::NewProp_Landscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics::NewProp_LandscapeStreamingProxies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics::NewProp_LandscapeStreamingProxies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaeaSubsystem, nullptr, "GetLandscapeActorProxies", Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics::GaeaSubsystem_eventGetLandscapeActorProxies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics::GaeaSubsystem_eventGetLandscapeActorProxies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaeaSubsystem::execGetLandscapeActorProxies)
{
	P_GET_OBJECT(ALandscape,Z_Param_Landscape);
	P_GET_TARRAY_REF(ALandscapeProxy*,Z_Param_Out_LandscapeStreamingProxies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLandscapeActorProxies(Z_Param_Landscape,Z_Param_Out_LandscapeStreamingProxies);
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function GetLandscapeActorProxies ***************************

// ********** Begin Class UGaeaSubsystem Function GetLandscapeLayerBlendNames **********************
struct Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics
{
	struct GaeaSubsystem_eventGetLandscapeLayerBlendNames_Parms
	{
		TArray<UMaterialExpressionLandscapeLayerBlend*> LayerBlends;
		TArray<FName> Names;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerBlends_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerBlends;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::NewProp_LayerBlends_Inner = { "LayerBlends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::NewProp_LayerBlends = { "LayerBlends", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetLandscapeLayerBlendNames_Parms, LayerBlends), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetLandscapeLayerBlendNames_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetLandscapeLayerBlendNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::NewProp_LayerBlends_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::NewProp_LayerBlends,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::NewProp_Names_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::NewProp_Names,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaeaSubsystem, nullptr, "GetLandscapeLayerBlendNames", Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::GaeaSubsystem_eventGetLandscapeLayerBlendNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::GaeaSubsystem_eventGetLandscapeLayerBlendNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaeaSubsystem::execGetLandscapeLayerBlendNames)
{
	P_GET_TARRAY(UMaterialExpressionLandscapeLayerBlend*,Z_Param_LayerBlends);
	P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetLandscapeLayerBlendNames(Z_Param_LayerBlends,Z_Param_Out_Names);
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function GetLandscapeLayerBlendNames ************************

// ********** Begin Class UGaeaSubsystem Function GetLandscapeLayerBlendNodes **********************
struct Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics
{
	struct GaeaSubsystem_eventGetLandscapeLayerBlendNodes_Parms
	{
		UMaterialInterface* MaterialInterface;
		TArray<UMaterialExpressionLandscapeLayerBlend*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetLandscapeLayerBlendNodes_Parms, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetLandscapeLayerBlendNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics::NewProp_MaterialInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaeaSubsystem, nullptr, "GetLandscapeLayerBlendNodes", Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics::GaeaSubsystem_eventGetLandscapeLayerBlendNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics::GaeaSubsystem_eventGetLandscapeLayerBlendNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaeaSubsystem::execGetLandscapeLayerBlendNodes)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialInterface);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMaterialExpressionLandscapeLayerBlend*>*)Z_Param__Result=P_THIS->GetLandscapeLayerBlendNodes(Z_Param_MaterialInterface);
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function GetLandscapeLayerBlendNodes ************************

// ********** Begin Class UGaeaSubsystem Function ImportHeightmap **********************************
struct Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics
{
	struct GaeaSubsystem_eventImportHeightmap_Parms
	{
		FString Heightmap;
		FString JSON;
		FVector Scale;
		FVector Location;
		TArray<FString> Weightmaps;
		FString CachedPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Open import dialog for heightmap file types. Will set a path for heightmap and json files.\n" },
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
		{ "ToolTip", "Open import dialog for heightmap file types. Will set a path for heightmap and json files." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Heightmap;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSON;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Weightmaps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Weightmaps;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::NewProp_Heightmap = { "Heightmap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventImportHeightmap_Parms, Heightmap), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventImportHeightmap_Parms, JSON), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventImportHeightmap_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventImportHeightmap_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::NewProp_Weightmaps_Inner = { "Weightmaps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::NewProp_Weightmaps = { "Weightmaps", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventImportHeightmap_Parms, Weightmaps), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::NewProp_CachedPath = { "CachedPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventImportHeightmap_Parms, CachedPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::NewProp_Heightmap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::NewProp_JSON,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::NewProp_Weightmaps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::NewProp_Weightmaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::NewProp_CachedPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaeaSubsystem, nullptr, "ImportHeightmap", Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::GaeaSubsystem_eventImportHeightmap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::GaeaSubsystem_eventImportHeightmap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaeaSubsystem::execImportHeightmap)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Heightmap);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_JSON);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Scale);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Weightmaps);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CachedPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ImportHeightmap(Z_Param_Out_Heightmap,Z_Param_Out_JSON,Z_Param_Out_Scale,Z_Param_Out_Location,Z_Param_Out_Weightmaps,Z_Param_Out_CachedPath);
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function ImportHeightmap ************************************

// ********** Begin Class UGaeaSubsystem Function ReadStringFromFile *******************************
struct Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics
{
	struct GaeaSubsystem_eventReadStringFromFile_Parms
	{
		FString Path;
		bool bOutSuccess;
		FString OutMessage;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static void NewProp_bOutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventReadStringFromFile_Parms, Path), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
{
	((GaeaSubsystem_eventReadStringFromFile_Parms*)Obj)->bOutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GaeaSubsystem_eventReadStringFromFile_Parms), &Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::NewProp_OutMessage = { "OutMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventReadStringFromFile_Parms, OutMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventReadStringFromFile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::NewProp_bOutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::NewProp_OutMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaeaSubsystem, nullptr, "ReadStringFromFile", Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::GaeaSubsystem_eventReadStringFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::GaeaSubsystem_eventReadStringFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaeaSubsystem::execReadStringFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ReadStringFromFile(Z_Param_Path,Z_Param_Out_bOutSuccess,Z_Param_Out_OutMessage);
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function ReadStringFromFile *********************************

// ********** Begin Class UGaeaSubsystem Function ReimportGaeaTerrain ******************************
struct Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaTerrain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaTerrain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaeaSubsystem, nullptr, "ReimportGaeaTerrain", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaTerrain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaTerrain_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaTerrain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaTerrain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaeaSubsystem::execReimportGaeaTerrain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReimportGaeaTerrain();
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function ReimportGaeaTerrain ********************************

// ********** Begin Class UGaeaSubsystem Function ReimportGaeaWPTerrain ****************************
struct Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaWPTerrain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaWPTerrain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaeaSubsystem, nullptr, "ReimportGaeaWPTerrain", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaWPTerrain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaWPTerrain_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaWPTerrain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaWPTerrain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaeaSubsystem::execReimportGaeaWPTerrain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReimportGaeaWPTerrain();
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function ReimportGaeaWPTerrain ******************************

// ********** Begin Class UGaeaSubsystem Function SpawnGImporterWindow *****************************
struct Z_Construct_UFunction_UGaeaSubsystem_SpawnGImporterWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Spawn the Gaea Landscape Creator Window\n" },
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
		{ "ToolTip", "Spawn the Gaea Landscape Creator Window" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaeaSubsystem_SpawnGImporterWindow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaeaSubsystem, nullptr, "SpawnGImporterWindow", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaeaSubsystem_SpawnGImporterWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaeaSubsystem_SpawnGImporterWindow_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGaeaSubsystem_SpawnGImporterWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaeaSubsystem_SpawnGImporterWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaeaSubsystem::execSpawnGImporterWindow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnGImporterWindow();
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function SpawnGImporterWindow *******************************

// ********** Begin Class UGaeaSubsystem ***********************************************************
void UGaeaSubsystem::StaticRegisterNativesUGaeaSubsystem()
{
	UClass* Class = UGaeaSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateLandscapeActor", &UGaeaSubsystem::execCreateLandscapeActor },
		{ "CreateStructFromJson", &UGaeaSubsystem::execCreateStructFromJson },
		{ "GetGaeaSubsystem", &UGaeaSubsystem::execGetGaeaSubsystem },
		{ "GetLandscape", &UGaeaSubsystem::execGetLandscape },
		{ "GetLandscapeActorProxies", &UGaeaSubsystem::execGetLandscapeActorProxies },
		{ "GetLandscapeLayerBlendNames", &UGaeaSubsystem::execGetLandscapeLayerBlendNames },
		{ "GetLandscapeLayerBlendNodes", &UGaeaSubsystem::execGetLandscapeLayerBlendNodes },
		{ "ImportHeightmap", &UGaeaSubsystem::execImportHeightmap },
		{ "ReadStringFromFile", &UGaeaSubsystem::execReadStringFromFile },
		{ "ReimportGaeaTerrain", &UGaeaSubsystem::execReimportGaeaTerrain },
		{ "ReimportGaeaWPTerrain", &UGaeaSubsystem::execReimportGaeaWPTerrain },
		{ "SpawnGImporterWindow", &UGaeaSubsystem::execSpawnGImporterWindow },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGaeaSubsystem;
UClass* UGaeaSubsystem::GetPrivateStaticClass()
{
	using TClass = UGaeaSubsystem;
	if (!Z_Registration_Info_UClass_UGaeaSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GaeaSubsystem"),
			Z_Registration_Info_UClass_UGaeaSubsystem.InnerSingleton,
			StaticRegisterNativesUGaeaSubsystem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UGaeaSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UGaeaSubsystem_NoRegister()
{
	return UGaeaSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGaeaSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GaeaSubsystem.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImporterSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDialogPath_MetaData[] = {
		{ "Comment", "/*UPROPERTY()\n\x09UGMCSettings* PanelSettings = nullptr;*/" },
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
		{ "ToolTip", "UPROPERTY()\n       UGMCSettings* PanelSettings = nullptr;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImporterSettings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultDialogPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor, "CreateLandscapeActor" }, // 126047164
		{ &Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson, "CreateStructFromJson" }, // 490026605
		{ &Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem, "GetGaeaSubsystem" }, // 2188458190
		{ &Z_Construct_UFunction_UGaeaSubsystem_GetLandscape, "GetLandscape" }, // 3811358538
		{ &Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeActorProxies, "GetLandscapeActorProxies" }, // 184675934
		{ &Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames, "GetLandscapeLayerBlendNames" }, // 4183170873
		{ &Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes, "GetLandscapeLayerBlendNodes" }, // 2137930294
		{ &Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap, "ImportHeightmap" }, // 1676635086
		{ &Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile, "ReadStringFromFile" }, // 1207228057
		{ &Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaTerrain, "ReimportGaeaTerrain" }, // 2924816092
		{ &Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaWPTerrain, "ReimportGaeaWPTerrain" }, // 1158654563
		{ &Z_Construct_UFunction_UGaeaSubsystem_SpawnGImporterWindow, "SpawnGImporterWindow" }, // 732022179
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaeaSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGaeaSubsystem_Statics::NewProp_ImporterSettings = { "ImporterSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaeaSubsystem, ImporterSettings), Z_Construct_UClass_UImporterPanelSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImporterSettings_MetaData), NewProp_ImporterSettings_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGaeaSubsystem_Statics::NewProp_DefaultDialogPath = { "DefaultDialogPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaeaSubsystem, DefaultDialogPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDialogPath_MetaData), NewProp_DefaultDialogPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGaeaSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaeaSubsystem_Statics::NewProp_ImporterSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaeaSubsystem_Statics::NewProp_DefaultDialogPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaeaSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGaeaSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_GaeaUEToolsEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaeaSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGaeaSubsystem_Statics::ClassParams = {
	&UGaeaSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGaeaSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGaeaSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGaeaSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGaeaSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGaeaSubsystem()
{
	if (!Z_Registration_Info_UClass_UGaeaSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGaeaSubsystem.OuterSingleton, Z_Construct_UClass_UGaeaSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGaeaSubsystem.OuterSingleton;
}
UGaeaSubsystem::UGaeaSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGaeaSubsystem);
UGaeaSubsystem::~UGaeaSubsystem() {}
// ********** End Class UGaeaSubsystem *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h__Script_GaeaUEToolsEditor_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGaeaJson::StaticStruct, Z_Construct_UScriptStruct_FGaeaJson_Statics::NewStructOps, TEXT("GaeaJson"), &Z_Registration_Info_UScriptStruct_FGaeaJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGaeaJson), 586650515U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGaeaSubsystem, UGaeaSubsystem::StaticClass, TEXT("UGaeaSubsystem"), &Z_Registration_Info_UClass_UGaeaSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGaeaSubsystem), 2716678208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h__Script_GaeaUEToolsEditor_1759059922(TEXT("/Script/GaeaUEToolsEditor"),
	Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h__Script_GaeaUEToolsEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h__Script_GaeaUEToolsEditor_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h__Script_GaeaUEToolsEditor_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h__Script_GaeaUEToolsEditor_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
