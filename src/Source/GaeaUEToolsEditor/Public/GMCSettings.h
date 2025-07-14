// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Materials/MaterialInstance.h"
#include "GMCSettings.generated.h"

/**
 * 
 */

UENUM()
enum class ELandscapeBlendLayersType : uint8
{
	LB_WeightedBlend,
	LB_AlphaBlends,
	LB_HeightBlends,
};

USTRUCT(BlueprintType)
struct GAEAUETOOLSEDITOR_API FGaeaLandscapeSetting
{
	GENERATED_BODY()

	// Material to pull textures from. Used with MS materials, mostly.
	UPROPERTY(EditAnywhere, Category="Gaea")
	UMaterialInstance* InstancedMaterial = nullptr;
	
	// Function to create "instanced" layer functions from to inject into the landscape master material
	UPROPERTY(EditAnywhere, Category="Gaea")
	UMaterialFunction* MaterialFunctionBase = nullptr;
	
	// Sets the landscape layer name and layer function name
	UPROPERTY(EditAnywhere, Category="Gaea")
	FName LayerName;
	
	// Sets the parameter grouping within the function layer
	UPROPERTY(EditAnywhere, Category="Gaea")
	FName LayerGrouping;
	
	// Sets the landscape layer blend type
	UPROPERTY(EditAnywhere, Category="Gaea")
	ELandscapeBlendLayersType LandscapeLayerType = ELandscapeBlendLayersType::LB_WeightedBlend;
	
	
};
UCLASS()
class GAEAUETOOLSEDITOR_API UGMCSettings : public UObject
{
	GENERATED_BODY()
public:
	UGMCSettings();
	~UGMCSettings();

	UPROPERTY(EditAnywhere, Category="Landscape Layer Creation settings")
	TArray<FGaeaLandscapeSetting> LandscapeLayerSettings;
	
	UPROPERTY(EditAnywhere, DisplayName="Material Save Location",meta = (ContentDir), Category="Landscape Creation settings")
	FDirectoryPath ContentBrowserPath;

	UPROPERTY(EditAnywhere, Category="Landscape Creation settings")
	FString LandscapeMaterialName;
};
