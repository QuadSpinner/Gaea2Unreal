// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Materials/MaterialInterface.h"
#include "ImporterPanelSettings.generated.h"

/**
 * 
 */
UCLASS(NotBlueprintable)
class GAEAUETOOLSEDITOR_API UImporterPanelSettings final : public UObject
{
	GENERATED_BODY()
	
public:
	UImporterPanelSettings();
	~UImporterPanelSettings();
	

	UPROPERTY(VisibleAnywhere, DisplayName="Heightmap Filename", Category="Filepaths")
	FString HeightMapFileName;

	UPROPERTY(VisibleAnywhere, DisplayName="JSON Filename", Category="Filepaths")
	FString jsonFileName;

	//Reorder these to match the desired landscape layer. This must always be less than the amount of layers provided by the landscape material.
	UPROPERTY(EditAnywhere, DisplayName= "Weightmap Filenames", Category="Filepaths")
	TArray<FString>  WeightmapFileNames;

	UPROPERTY()
	TArray<FString>  WeightmapFilePaths;

	UPROPERTY()
	FString StoredPath;

	UPROPERTY(EditAnywhere, Category="Landscape Actor Settings")
	bool EnableEditLayers = true;

	UPROPERTY(EditAnywhere, DisplayName="Flip Y Axis", Category="Landscape Actor Settings")
	bool FlipYAxis;

	UPROPERTY(EditAnywhere, Category="Landscape Actor Settings|World Partition", DisplayName="Enable World Partition")
	bool bIsWorldPartition = true;

	// Used only if the level has world partition support.
	UPROPERTY(EditAnywhere, Category="Landscape Actor Settings|World Partition", meta = (EditCondition = "bIsWorldPartition", UIMin="1", UIMax="16", ClampMin="1", ClampMax="16"))
	int32 WorldPartitionGridSize = 2;
	
	//Must be set to automatically setup layer weightmaps.
	UPROPERTY(Category="Rendering", EditAnywhere, DisplayName="Landscape Material")
	TObjectPtr<UMaterialInterface> LandscapeMaterial;

	UPROPERTY(Category="Rendering", VisibleAnywhere, DisplayName="Landscape Layer Names", meta = (EditCondition = "IsLandscapeMaterialLayerNamesNotEmpty()"))
	TArray<FName> LandscapeMaterialLayerNames;

	UFUNCTION()
	bool IsLandscapeMaterialLayerNamesNotEmpty() const
	{
		return LandscapeMaterialLayerNames.Num() > 0;
	}

	//Where to create layer info objects.
	UPROPERTY(Category="Rendering", EditAnywhere, meta = (ContentDir), DisplayName="Layer Info Folder")
	FDirectoryPath LayerInfoFolder;

	UPROPERTY(EditAnywhere, Category="Transform")
	FVector Location = FVector(0,0,100);

	UPROPERTY(EditAnywhere, Category="Transform")
	FRotator Rotation;

	UPROPERTY(EditAnywhere, Category="Transform")
	FVector Scale = FVector(100,100,100);

	UPROPERTY()
	FIntPoint Components;

	UPROPERTY()
	FIntPoint Resolution;
	
	UPROPERTY()
	int32 TotalComponents;

	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	
};
