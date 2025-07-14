// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGMCSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGMCSettings();
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGMCSettings_NoRegister();
GAEAUETOOLSEDITOR_API UEnum* Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType();
GAEAUETOOLSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGaeaLandscapeSetting();
UPackage* Z_Construct_UPackage__Script_GaeaUEToolsEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELandscapeBlendLayersType *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeBlendLayersType;
static UEnum* ELandscapeBlendLayersType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeBlendLayersType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeBlendLayersType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType, (UObject*)Z_Construct_UPackage__Script_GaeaUEToolsEditor(), TEXT("ELandscapeBlendLayersType"));
	}
	return Z_Registration_Info_UEnum_ELandscapeBlendLayersType.OuterSingleton;
}
template<> GAEAUETOOLSEDITOR_API UEnum* StaticEnum<ELandscapeBlendLayersType>()
{
	return ELandscapeBlendLayersType_StaticEnum();
}
struct Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "LB_AlphaBlends.Comment", "/**\n * \n */" },
		{ "LB_AlphaBlends.Name", "ELandscapeBlendLayersType::LB_AlphaBlends" },
		{ "LB_HeightBlends.Comment", "/**\n * \n */" },
		{ "LB_HeightBlends.Name", "ELandscapeBlendLayersType::LB_HeightBlends" },
		{ "LB_WeightedBlend.Comment", "/**\n * \n */" },
		{ "LB_WeightedBlend.Name", "ELandscapeBlendLayersType::LB_WeightedBlend" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELandscapeBlendLayersType::LB_WeightedBlend", (int64)ELandscapeBlendLayersType::LB_WeightedBlend },
		{ "ELandscapeBlendLayersType::LB_AlphaBlends", (int64)ELandscapeBlendLayersType::LB_AlphaBlends },
		{ "ELandscapeBlendLayersType::LB_HeightBlends", (int64)ELandscapeBlendLayersType::LB_HeightBlends },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GaeaUEToolsEditor,
	nullptr,
	"ELandscapeBlendLayersType",
	"ELandscapeBlendLayersType",
	Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType()
{
	if (!Z_Registration_Info_UEnum_ELandscapeBlendLayersType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeBlendLayersType.InnerSingleton, Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeBlendLayersType.InnerSingleton;
}
// ********** End Enum ELandscapeBlendLayersType ***************************************************

// ********** Begin ScriptStruct FGaeaLandscapeSetting *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGaeaLandscapeSetting;
class UScriptStruct* FGaeaLandscapeSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGaeaLandscapeSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGaeaLandscapeSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaeaLandscapeSetting, (UObject*)Z_Construct_UPackage__Script_GaeaUEToolsEditor(), TEXT("GaeaLandscapeSetting"));
	}
	return Z_Registration_Info_UScriptStruct_FGaeaLandscapeSetting.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMaterial_MetaData[] = {
		{ "Category", "Gaea" },
		{ "Comment", "// Material to pull textures from. Used with MS materials, mostly.\n" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
		{ "ToolTip", "Material to pull textures from. Used with MS materials, mostly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFunctionBase_MetaData[] = {
		{ "Category", "Gaea" },
		{ "Comment", "// Function to create \"instanced\" layer functions from to inject into the landscape master material\n" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
		{ "ToolTip", "Function to create \"instanced\" layer functions from to inject into the landscape master material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "Category", "Gaea" },
		{ "Comment", "// Sets the landscape layer name and layer function name\n" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
		{ "ToolTip", "Sets the landscape layer name and layer function name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerGrouping_MetaData[] = {
		{ "Category", "Gaea" },
		{ "Comment", "// Sets the parameter grouping within the function layer\n" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
		{ "ToolTip", "Sets the parameter grouping within the function layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayerType_MetaData[] = {
		{ "Category", "Gaea" },
		{ "Comment", "// Sets the landscape layer blend type\n" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
		{ "ToolTip", "Sets the landscape layer blend type" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialFunctionBase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerGrouping;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LandscapeLayerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LandscapeLayerType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaeaLandscapeSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::NewProp_InstancedMaterial = { "InstancedMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaLandscapeSetting, InstancedMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedMaterial_MetaData), NewProp_InstancedMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::NewProp_MaterialFunctionBase = { "MaterialFunctionBase", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaLandscapeSetting, MaterialFunctionBase), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialFunctionBase_MetaData), NewProp_MaterialFunctionBase_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaLandscapeSetting, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::NewProp_LayerGrouping = { "LayerGrouping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaLandscapeSetting, LayerGrouping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerGrouping_MetaData), NewProp_LayerGrouping_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::NewProp_LandscapeLayerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::NewProp_LandscapeLayerType = { "LandscapeLayerType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaLandscapeSetting, LandscapeLayerType), Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeLayerType_MetaData), NewProp_LandscapeLayerType_MetaData) }; // 114690888
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::NewProp_InstancedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::NewProp_MaterialFunctionBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::NewProp_LayerGrouping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::NewProp_LandscapeLayerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::NewProp_LandscapeLayerType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GaeaUEToolsEditor,
	nullptr,
	&NewStructOps,
	"GaeaLandscapeSetting",
	Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::PropPointers),
	sizeof(FGaeaLandscapeSetting),
	alignof(FGaeaLandscapeSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGaeaLandscapeSetting()
{
	if (!Z_Registration_Info_UScriptStruct_FGaeaLandscapeSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGaeaLandscapeSetting.InnerSingleton, Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGaeaLandscapeSetting.InnerSingleton;
}
// ********** End ScriptStruct FGaeaLandscapeSetting ***********************************************

// ********** Begin Class UGMCSettings *************************************************************
void UGMCSettings::StaticRegisterNativesUGMCSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGMCSettings;
UClass* UGMCSettings::GetPrivateStaticClass()
{
	using TClass = UGMCSettings;
	if (!Z_Registration_Info_UClass_UGMCSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GMCSettings"),
			Z_Registration_Info_UClass_UGMCSettings.InnerSingleton,
			StaticRegisterNativesUGMCSettings,
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
	return Z_Registration_Info_UClass_UGMCSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UGMCSettings_NoRegister()
{
	return UGMCSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGMCSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GMCSettings.h" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayerSettings_MetaData[] = {
		{ "Category", "Landscape Layer Creation settings" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentBrowserPath_MetaData[] = {
		{ "Category", "Landscape Creation settings" },
		{ "ContentDir", "" },
		{ "DisplayName", "Material Save Location" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterialName_MetaData[] = {
		{ "Category", "Landscape Creation settings" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeLayerSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeLayerSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContentBrowserPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LandscapeMaterialName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMCSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMCSettings_Statics::NewProp_LandscapeLayerSettings_Inner = { "LandscapeLayerSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGaeaLandscapeSetting, METADATA_PARAMS(0, nullptr) }; // 2448113848
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGMCSettings_Statics::NewProp_LandscapeLayerSettings = { "LandscapeLayerSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMCSettings, LandscapeLayerSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeLayerSettings_MetaData), NewProp_LandscapeLayerSettings_MetaData) }; // 2448113848
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGMCSettings_Statics::NewProp_ContentBrowserPath = { "ContentBrowserPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMCSettings, ContentBrowserPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentBrowserPath_MetaData), NewProp_ContentBrowserPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGMCSettings_Statics::NewProp_LandscapeMaterialName = { "LandscapeMaterialName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMCSettings, LandscapeMaterialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeMaterialName_MetaData), NewProp_LandscapeMaterialName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGMCSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMCSettings_Statics::NewProp_LandscapeLayerSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMCSettings_Statics::NewProp_LandscapeLayerSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMCSettings_Statics::NewProp_ContentBrowserPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMCSettings_Statics::NewProp_LandscapeMaterialName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMCSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGMCSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GaeaUEToolsEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMCSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGMCSettings_Statics::ClassParams = {
	&UGMCSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGMCSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGMCSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMCSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGMCSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGMCSettings()
{
	if (!Z_Registration_Info_UClass_UGMCSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGMCSettings.OuterSingleton, Z_Construct_UClass_UGMCSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGMCSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGMCSettings);
// ********** End Class UGMCSettings ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h__Script_GaeaUEToolsEditor_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELandscapeBlendLayersType_StaticEnum, TEXT("ELandscapeBlendLayersType"), &Z_Registration_Info_UEnum_ELandscapeBlendLayersType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 114690888U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGaeaLandscapeSetting::StaticStruct, Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::NewStructOps, TEXT("GaeaLandscapeSetting"), &Z_Registration_Info_UScriptStruct_FGaeaLandscapeSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGaeaLandscapeSetting), 2448113848U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGMCSettings, UGMCSettings::StaticClass, TEXT("UGMCSettings"), &Z_Registration_Info_UClass_UGMCSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGMCSettings), 3924316588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h__Script_GaeaUEToolsEditor_1934525778(TEXT("/Script/GaeaUEToolsEditor"),
	Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h__Script_GaeaUEToolsEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h__Script_GaeaUEToolsEditor_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h__Script_GaeaUEToolsEditor_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h__Script_GaeaUEToolsEditor_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h__Script_GaeaUEToolsEditor_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G56_GaeaUnrealTools_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h__Script_GaeaUEToolsEditor_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
