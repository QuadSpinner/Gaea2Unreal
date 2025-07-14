// Fill out your copyright notice in the Description page of Project Settings.
#include "GaeaEditorStyle.h"

#include "Interfaces/IPluginManager.h"
#include "Styling/CoreStyle.h"
#include "Styling/SlateStyleRegistry.h"

DEFINE_LOG_CATEGORY(GaeaEditorStyle)

TUniquePtr<FSlateStyleSet> FGaeaEditorStyle::StyleSet;
 
void FGaeaEditorStyle::Initialize()
{
	if (StyleSet.IsValid())
	{
		// Only set up once
		return;
	}
 
	// Create the style sheet
	StyleSet = MakeUnique<FSlateStyleSet>(GetStyleSetName());

	//const FString ContentDir = "All/Plugins/GaeaUnrealTools/Icons/";

	/*static const FString ContentDir = IPluginManager::Get().FindPlugin(TEXT("GaeaUnrealTools"))->GetContentDir();
	UE_LOG(LogTemp, Warning, TEXT("Content Directory is: %s"), *ContentDir);

	// Construct the relative path to the image file
	const FString IconPath = ContentDir + "/Icons/ImporterIcon.png";*/
	
	FString PluginPath = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("GaeaUnrealTools"));
	if (!FPaths::DirectoryExists(PluginPath))
		PluginPath = FPaths::Combine(FPaths::EnginePluginsDir(), TEXT("GaeaUnrealTools"));

	if (FPaths::DirectoryExists(PluginPath))
	{
		// Plugin found, construct the resources path
		const FString ResourcesPath = FPaths::Combine(PluginPath, TEXT("Resources"));
		UE_LOG(GaeaEditorStyle, Display, TEXT("Resources Directory is: %s"), *ResourcesPath);

		// Construct the relative path to the image file
		const FString IconPath = ResourcesPath + "/ImporterIcon.png";
		StyleSet->Set("ImporterIcon", new FSlateImageBrush(IconPath, FVector2D(40.0f, 40.0f)));
	}
	else
	{
		// Plugin not found
		UE_LOG(GaeaEditorStyle, Warning, TEXT("GaeaUnrealTools plugin not found"));
	}
	
 
	// Register the style set
	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
}
 
void FGaeaEditorStyle::Shutdown()
{
	// Unregister the style set
	if (StyleSet.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet.Get());
		StyleSet.Reset();
	}
}
 
FName FGaeaEditorStyle::GetStyleSetName()
{
	static const FName StyleSetName(TEXT("GaeaEditorStyle"));
	return StyleSetName;
}

FString FGaeaEditorStyle::RootToPluginContentDir(const FString& RelativePath, const TCHAR* Extension)
{
	static const FString ContentDir = IPluginManager::Get().FindPlugin(TEXT("GaeaUnrealTools"))->GetContentDir();
	return (ContentDir / RelativePath) + Extension;
}
