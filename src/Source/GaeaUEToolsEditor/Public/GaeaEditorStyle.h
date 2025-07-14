// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Styling/SlateStyle.h"

DECLARE_LOG_CATEGORY_EXTERN(GaeaEditorStyle, Log, All);

class FGaeaEditorStyle final
{
public:
 
	static void Initialize();
	static void Shutdown();
 
	static ISlateStyle& Get()
	{
		return *StyleSet.Get();
	}
 
	static FName GetStyleSetName();
 
private:
 
	static FString RootToPluginContentDir(const FString& RelativePath, const TCHAR* Extension);
 
	static TUniquePtr<FSlateStyleSet> StyleSet;
};
