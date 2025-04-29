// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Math/MathFwd.h"
#include "EditorSubsystem.h"
#include "Modules/ModuleManager.h"
#include "Input/Reply.h"
#include "IDesktopPlatform.h"
//#include "GaeaUEFunctionLibrary.h"
//#include "GMCSettings.h"
#include "ImporterPanelSettings.h"
#include "LandscapeImportHelper.h"
#include "LandscapeTiledImage.h"
#include "Landscape.h"
#include "IDetailsView.h"
#include "GaeaSubsystem.generated.h"

/**
 * 
 */

class FJsonObject;

USTRUCT()
struct FGaeaJson
{
	GENERATED_BODY()
	
	UPROPERTY()
	FString ID = TEXT("");
	UPROPERTY()
	int32 Resolution = 0;
	UPROPERTY()
	float ScaleX = 1.0f;
	UPROPERTY()
	float ScaleY = 1.0f;
	UPROPERTY()
	float ScaleZ = 1.0f;
	UPROPERTY()
	float Height = 0.0f;
	UPROPERTY()
	FString Unit = TEXT("");
	
};

UCLASS(NotBlueprintable)
class GAEAUETOOLSEDITOR_API UGaeaSubsystem final : public UEditorSubsystem 
{
	GENERATED_BODY()
public:

	// Get instance of the Gaea Subsystem
	UFUNCTION()
	static UGaeaSubsystem* GetGaeaSubsystem();

	// Spawn the Gaea Material Creator Window - future release
	/*UFUNCTION(Category="Gaea")
	void SpawnGMCWindow();*/

	// Spawn the Gaea Landscape Creator Window
	UFUNCTION()
	void SpawnGImporterWindow();

	UFUNCTION()
	void ReimportGaeaTerrain();
	
	UFUNCTION()
	void ReimportGaeaWPTerrain();

	// Open import dialog for heightmap file types. Will set a path for heightmap and json files.
	UFUNCTION()
	void ImportHeightmap(FString& Heightmap, FString& JSON, FVector& Scale, FVector& Location, TArray<FString>& Weightmaps, FString& CachedPath);

	UFUNCTION()
	FString ReadStringFromFile(FString Path, bool& bOutSuccess, FString& OutMessage);
	
	TSharedPtr<FJsonObject> ReadJson(FString Path, bool& bOutSuccess, FString& OutMessage);

	UFUNCTION()
	FGaeaJson CreateStructFromJson(FString Path, bool& bOutSuccess, FString& OutMessage);

	UFUNCTION()
	ALandscape* GetLandscape(ULandscapeInfo* LandscapeInfo) const;
	
	//FGuid GetLayerGuidFromIndex(int32 Index, ULandscapeInfo* LandscapeInfo) const;
	
	//Creates a landscape actor from our panel settings.
	UFUNCTION()
	void CreateLandscapeActor(UImporterPanelSettings* Settings);

	UFUNCTION()
	TArray<UMaterialExpressionLandscapeLayerBlend*> GetLandscapeLayerBlendNodes(UMaterialInterface* MaterialInterface);

	UFUNCTION()
	TArray<FName> GetLandscapeLayerBlendNames(TArray<UMaterialExpressionLandscapeLayerBlend*> LayerBlends, TArray<FName>& Names);


private:
	
	UPROPERTY()
	UImporterPanelSettings* ImporterSettings = nullptr;
	
	/*UPROPERTY()
	UGMCSettings* PanelSettings = nullptr;*/

	UPROPERTY()
	FString DefaultDialogPath;
	
	TSharedPtr<IDetailsView> PropertyWidget;
	TWeakPtr<SWindow> WindowValidator;
	TWeakPtr<SWindow> ImporterWindowValidator;
	
	
};





