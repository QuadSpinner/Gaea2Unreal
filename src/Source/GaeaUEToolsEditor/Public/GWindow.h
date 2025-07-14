// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Widgets/SWindow.h"
#include "DesktopPlatformModule.h"
#include "ImporterPanelSettings.h"
#include "CoreMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(GaeaWindow, Log, All);

/*-----------------------------------------------------------------------------
		Material Creator Window Class
-----------------------------------------------------------------------------*/
class GAEAUETOOLSEDITOR_API SMCWindow : public SWindow
{
public:
	SMCWindow();
	~SMCWindow();

	SLATE_BEGIN_ARGS(SMCWindow)
	{
		Title(FText::GetEmpty());
		ClientSize(FVector2d(800,600));
		SizingRule(ESizingRule::UserSized);
	}

	SLATE_ARGUMENT(FText, Title);
	SLATE_ARGUMENT(FVector2D, ClientSize);
	SLATE_ARGUMENT(ESizingRule, SizingRule);
	
	SLATE_END_ARGS()
};

/*-----------------------------------------------------------------------------
		Import Window Class
-----------------------------------------------------------------------------*/

class GAEAUETOOLSEDITOR_API SGaeaImportWindow : public SWindow
{
public:
	SGaeaImportWindow();
	~SGaeaImportWindow();

	SLATE_BEGIN_ARGS(SGaeaImportWindow)
	{
		Title(FText::GetEmpty());
		ClientSize(FVector2d(800,600));
		SizingRule(ESizingRule::UserSized);
	}

	SLATE_ARGUMENT(FText, Title);
	SLATE_ARGUMENT(FVector2D, ClientSize);
	SLATE_ARGUMENT(ESizingRule, SizingRule);
	
	SLATE_END_ARGS()
	
	void Construct(const FArguments& InArgs);

	void CreateDetailsView();

private:
	
	UImporterPanelSettings* ImporterSettings = nullptr;
	TSharedPtr<class IDetailsView> PropertyWidget;
	FReply OnImportClicked() const;
	FReply OnCreateLandscapeClicked();
	
};