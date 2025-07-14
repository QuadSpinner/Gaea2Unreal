// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImporterPanelSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeImporterPanelSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UImporterPanelSettings();
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UImporterPanelSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_GaeaUEToolsEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UImporterPanelSettings Function IsLandscapeMaterialLayerNamesNotEmpty ****
struct Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics
{
	struct ImporterPanelSettings_eventIsLandscapeMaterialLayerNamesNotEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ImporterPanelSettings_eventIsLandscapeMaterialLayerNamesNotEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ImporterPanelSettings_eventIsLandscapeMaterialLayerNamesNotEmpty_Parms), &Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UImporterPanelSettings, nullptr, "IsLandscapeMaterialLayerNamesNotEmpty", Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::ImporterPanelSettings_eventIsLandscapeMaterialLayerNamesNotEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::ImporterPanelSettings_eventIsLandscapeMaterialLayerNamesNotEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImporterPanelSettings::execIsLandscapeMaterialLayerNamesNotEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLandscapeMaterialLayerNamesNotEmpty();
	P_NATIVE_END;
}
// ********** End Class UImporterPanelSettings Function IsLandscapeMaterialLayerNamesNotEmpty ******

// ********** Begin Class UImporterPanelSettings ***************************************************
void UImporterPanelSettings::StaticRegisterNativesUImporterPanelSettings()
{
	UClass* Class = UImporterPanelSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsLandscapeMaterialLayerNamesNotEmpty", &UImporterPanelSettings::execIsLandscapeMaterialLayerNamesNotEmpty },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UImporterPanelSettings;
UClass* UImporterPanelSettings::GetPrivateStaticClass()
{
	using TClass = UImporterPanelSettings;
	if (!Z_Registration_Info_UClass_UImporterPanelSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ImporterPanelSettings"),
			Z_Registration_Info_UClass_UImporterPanelSettings.InnerSingleton,
			StaticRegisterNativesUImporterPanelSettings,
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
	return Z_Registration_Info_UClass_UImporterPanelSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UImporterPanelSettings_NoRegister()
{
	return UImporterPanelSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UImporterPanelSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ImporterPanelSettings.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapFileName_MetaData[] = {
		{ "Category", "Filepaths" },
		{ "DisplayName", "Heightmap Filename" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jsonFileName_MetaData[] = {
		{ "Category", "Filepaths" },
		{ "DisplayName", "JSON Filename" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapFileNames_MetaData[] = {
		{ "Category", "Filepaths" },
		{ "Comment", "//Reorder these to match the desired landscape layer. This must always be less than the amount of layers provided by the landscape material.\n" },
		{ "DisplayName", "Weightmap Filenames" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
		{ "ToolTip", "Reorder these to match the desired landscape layer. This must always be less than the amount of layers provided by the landscape material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapFilePaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableEditLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipYAxis_MetaData[] = {
		{ "Category", "Landscape Actor Settings" },
		{ "DisplayName", "Flip Y Axis" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWorldPartition_MetaData[] = {
		{ "Category", "Landscape Actor Settings|World Partition" },
		{ "DisplayName", "Enable World Partition" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionGridSize_MetaData[] = {
		{ "Category", "Landscape Actor Settings|World Partition" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "Comment", "// Used only if the level has world partition support.\n" },
		{ "EditCondition", "bIsWorldPartition" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
		{ "ToolTip", "Used only if the level has world partition support." },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "//Must be set to automatically setup layer weightmaps.\n" },
		{ "DisplayName", "Landscape Material" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
		{ "ToolTip", "Must be set to automatically setup layer weightmaps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterialLayerNames_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Landscape Layer Names" },
		{ "EditCondition", "IsLandscapeMaterialLayerNamesNotEmpty()" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfoFolder_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "//Where to create layer info objects.\n" },
		{ "ContentDir", "" },
		{ "DisplayName", "Layer Info Folder" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
		{ "ToolTip", "Where to create layer info objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeightMapFileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_jsonFileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WeightmapFileNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapFileNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WeightmapFilePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapFilePaths;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StoredPath;
	static void NewProp_EnableEditLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableEditLayers;
	static void NewProp_FlipYAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FlipYAxis;
	static void NewProp_bIsWorldPartition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWorldPartition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorldPartitionGridSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeMaterial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LandscapeMaterialLayerNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeMaterialLayerNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerInfoFolder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Components;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty, "IsLandscapeMaterialLayerNamesNotEmpty" }, // 2178198309
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImporterPanelSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_HeightMapFileName = { "HeightMapFileName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, HeightMapFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMapFileName_MetaData), NewProp_HeightMapFileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_jsonFileName = { "jsonFileName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, jsonFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jsonFileName_MetaData), NewProp_jsonFileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFileNames_Inner = { "WeightmapFileNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFileNames = { "WeightmapFileNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, WeightmapFileNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapFileNames_MetaData), NewProp_WeightmapFileNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFilePaths_Inner = { "WeightmapFilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFilePaths = { "WeightmapFilePaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, WeightmapFilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapFilePaths_MetaData), NewProp_WeightmapFilePaths_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_StoredPath = { "StoredPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, StoredPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredPath_MetaData), NewProp_StoredPath_MetaData) };
void Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_EnableEditLayers_SetBit(void* Obj)
{
	((UImporterPanelSettings*)Obj)->EnableEditLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_EnableEditLayers = { "EnableEditLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UImporterPanelSettings), &Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_EnableEditLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableEditLayers_MetaData), NewProp_EnableEditLayers_MetaData) };
void Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_FlipYAxis_SetBit(void* Obj)
{
	((UImporterPanelSettings*)Obj)->FlipYAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_FlipYAxis = { "FlipYAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UImporterPanelSettings), &Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_FlipYAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipYAxis_MetaData), NewProp_FlipYAxis_MetaData) };
void Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_bIsWorldPartition_SetBit(void* Obj)
{
	((UImporterPanelSettings*)Obj)->bIsWorldPartition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_bIsWorldPartition = { "bIsWorldPartition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UImporterPanelSettings), &Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_bIsWorldPartition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWorldPartition_MetaData), NewProp_bIsWorldPartition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WorldPartitionGridSize = { "WorldPartitionGridSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, WorldPartitionGridSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPartitionGridSize_MetaData), NewProp_WorldPartitionGridSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterial = { "LandscapeMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, LandscapeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeMaterial_MetaData), NewProp_LandscapeMaterial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterialLayerNames_Inner = { "LandscapeMaterialLayerNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterialLayerNames = { "LandscapeMaterialLayerNames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, LandscapeMaterialLayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeMaterialLayerNames_MetaData), NewProp_LandscapeMaterialLayerNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LayerInfoFolder = { "LayerInfoFolder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, LayerInfoFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerInfoFolder_MetaData), NewProp_LayerInfoFolder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, Components), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Components_MetaData), NewProp_Components_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_TotalComponents = { "TotalComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, TotalComponents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalComponents_MetaData), NewProp_TotalComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImporterPanelSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_HeightMapFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_jsonFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFileNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFileNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFilePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WeightmapFilePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_StoredPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_EnableEditLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_FlipYAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_bIsWorldPartition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_WorldPartitionGridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterialLayerNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LandscapeMaterialLayerNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_LayerInfoFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Components,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImporterPanelSettings_Statics::NewProp_TotalComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UImporterPanelSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GaeaUEToolsEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImporterPanelSettings_Statics::ClassParams = {
	&UImporterPanelSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UImporterPanelSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImporterPanelSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UImporterPanelSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImporterPanelSettings()
{
	if (!Z_Registration_Info_UClass_UImporterPanelSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImporterPanelSettings.OuterSingleton, Z_Construct_UClass_UImporterPanelSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImporterPanelSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImporterPanelSettings);
// ********** End Class UImporterPanelSettings *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_ImporterPanelSettings_h__Script_GaeaUEToolsEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UImporterPanelSettings, UImporterPanelSettings::StaticClass, TEXT("UImporterPanelSettings"), &Z_Registration_Info_UClass_UImporterPanelSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImporterPanelSettings), 3070545377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_ImporterPanelSettings_h__Script_GaeaUEToolsEditor_1484926943(TEXT("/Script/GaeaUEToolsEditor"),
	Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_ImporterPanelSettings_h__Script_GaeaUEToolsEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_ImporterPanelSettings_h__Script_GaeaUEToolsEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
