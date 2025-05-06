// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaeaUEToolsEditor/Public/GaeaLandscapeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaeaLandscapeComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGaeaLandscapeComponent();
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGaeaLandscapeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GaeaUEToolsEditor();
// End Cross Module References

// Begin Class UGaeaLandscapeComponent
void UGaeaLandscapeComponent::StaticRegisterNativesUGaeaLandscapeComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGaeaLandscapeComponent);
UClass* Z_Construct_UClass_UGaeaLandscapeComponent_NoRegister()
{
	return UGaeaLandscapeComponent::StaticClass();
}
struct Z_Construct_UClass_UGaeaLandscapeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GaeaLandscapeComponent.h" },
		{ "ModuleRelativePath", "Public/GaeaLandscapeComponent.h" },
		{ "NotBlueprintable", "" },
		{ "NotBlueprintType", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockProperties_MetaData[] = {
		{ "Category", "Gaea Landscape" },
		{ "ModuleRelativePath", "Public/GaeaLandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapFilepath_MetaData[] = {
		{ "Category", "Gaea Landscape" },
		{ "EditCondition", "!LockProperties" },
		{ "FilePathFilter", "png" },
		{ "ModuleRelativePath", "Public/GaeaLandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefinitionFilepath_MetaData[] = {
		{ "Category", "Gaea Landscape" },
		{ "EditCondition", "!LockProperties" },
		{ "FilePathFilter", "json" },
		{ "ModuleRelativePath", "Public/GaeaLandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapFilepaths_MetaData[] = {
		{ "Category", "Gaea Landscape" },
		{ "EditCondition", "!LockProperties" },
		{ "FilePathFilter", "png" },
		{ "ModuleRelativePath", "Public/GaeaLandscapeComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_LockProperties_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LockProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightmapFilepath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefinitionFilepath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightmapFilepaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapFilepaths;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaeaLandscapeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGaeaLandscapeComponent_Statics::NewProp_LockProperties_SetBit(void* Obj)
{
	((UGaeaLandscapeComponent*)Obj)->LockProperties = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGaeaLandscapeComponent_Statics::NewProp_LockProperties = { "LockProperties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGaeaLandscapeComponent), &Z_Construct_UClass_UGaeaLandscapeComponent_Statics::NewProp_LockProperties_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockProperties_MetaData), NewProp_LockProperties_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGaeaLandscapeComponent_Statics::NewProp_HeightmapFilepath = { "HeightmapFilepath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaeaLandscapeComponent, HeightmapFilepath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapFilepath_MetaData), NewProp_HeightmapFilepath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGaeaLandscapeComponent_Statics::NewProp_DefinitionFilepath = { "DefinitionFilepath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaeaLandscapeComponent, DefinitionFilepath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefinitionFilepath_MetaData), NewProp_DefinitionFilepath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGaeaLandscapeComponent_Statics::NewProp_WeightmapFilepaths_Inner = { "WeightmapFilepaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGaeaLandscapeComponent_Statics::NewProp_WeightmapFilepaths = { "WeightmapFilepaths", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaeaLandscapeComponent, WeightmapFilepaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapFilepaths_MetaData), NewProp_WeightmapFilepaths_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGaeaLandscapeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaeaLandscapeComponent_Statics::NewProp_LockProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaeaLandscapeComponent_Statics::NewProp_HeightmapFilepath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaeaLandscapeComponent_Statics::NewProp_DefinitionFilepath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaeaLandscapeComponent_Statics::NewProp_WeightmapFilepaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaeaLandscapeComponent_Statics::NewProp_WeightmapFilepaths,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaeaLandscapeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGaeaLandscapeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GaeaUEToolsEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaeaLandscapeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGaeaLandscapeComponent_Statics::ClassParams = {
	&UGaeaLandscapeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGaeaLandscapeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGaeaLandscapeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGaeaLandscapeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGaeaLandscapeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGaeaLandscapeComponent()
{
	if (!Z_Registration_Info_UClass_UGaeaLandscapeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGaeaLandscapeComponent.OuterSingleton, Z_Construct_UClass_UGaeaLandscapeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGaeaLandscapeComponent.OuterSingleton;
}
template<> GAEAUETOOLSEDITOR_API UClass* StaticClass<UGaeaLandscapeComponent>()
{
	return UGaeaLandscapeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGaeaLandscapeComponent);
UGaeaLandscapeComponent::~UGaeaLandscapeComponent() {}
// End Class UGaeaLandscapeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_PeacefulLife_Plugins_Gaea2Unreal_Source_GaeaUEToolsEditor_Public_GaeaLandscapeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGaeaLandscapeComponent, UGaeaLandscapeComponent::StaticClass, TEXT("UGaeaLandscapeComponent"), &Z_Registration_Info_UClass_UGaeaLandscapeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGaeaLandscapeComponent), 946101618U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PeacefulLife_Plugins_Gaea2Unreal_Source_GaeaUEToolsEditor_Public_GaeaLandscapeComponent_h_2020774984(TEXT("/Script/GaeaUEToolsEditor"),
	Z_CompiledInDeferFile_FID_PeacefulLife_Plugins_Gaea2Unreal_Source_GaeaUEToolsEditor_Public_GaeaLandscapeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PeacefulLife_Plugins_Gaea2Unreal_Source_GaeaUEToolsEditor_Public_GaeaLandscapeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
