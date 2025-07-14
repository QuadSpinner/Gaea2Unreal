// Fill out your copyright notice in the Description page of Project Settings.


#include "GWindow.h"
#include "GaeaSubsystem.h"
#include "WorldPartition/WorldPartitionSubsystem.h"
#include "PropertyEditorModule.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SScrollBox.h"

DEFINE_LOG_CATEGORY(GaeaWindow)

SMCWindow::SMCWindow()
{
}

SMCWindow::~SMCWindow()
{
}

SGaeaImportWindow::SGaeaImportWindow()
{
}

SGaeaImportWindow::~SGaeaImportWindow()
{
	if (ImporterSettings)
	{
		ImporterSettings->RemoveFromRoot();
		ImporterSettings = nullptr;
	}
}

void SGaeaImportWindow::Construct(const FArguments& InArgs)
{
	
	CreateDetailsView();
	
	SWindow::Construct(SWindow::FArguments()
			.Title(InArgs._Title)
			.ClientSize(InArgs._ClientSize)
			.SizingRule(InArgs._SizingRule)
			);
	
	
	this->SetContent(SNew(SVerticalBox)
	   + SVerticalBox::Slot()
		.FillHeight(1)
	   [
		   SNew(SScrollBox)
		   + SScrollBox::Slot()
		   [
			   PropertyWidget.ToSharedRef()
		   ]
	   ]
	   + SVerticalBox::Slot()
		.AutoHeight()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Bottom)
	   [
		   SNew(SHorizontalBox)
		   + SHorizontalBox::Slot()
			 .FillWidth(0.5)
		   [
			   SNew(SButton)
			   .Text(FText::FromString(("Import Heightmap")))
			   .HAlign(HAlign_Center)
			   .VAlign(VAlign_Center)
			   .ButtonColorAndOpacity(FLinearColor::Gray)
			   .OnClicked(this, &SGaeaImportWindow::OnImportClicked)
		   ]
		   + SHorizontalBox::Slot()
			.FillWidth(0.5)
		   [
			   SNew(SButton)
			   .Text(FText::FromString(("Create Landscape")))
			   .HAlign(HAlign_Center)
			   .VAlign(VAlign_Center)
		   	.IsEnabled_Lambda([this]() {return ImporterSettings != nullptr 
		&& !ImporterSettings->HeightMapFileName.IsEmpty()
		&& (ImporterSettings->WeightmapFileNames.Num() == 0 
			|| ImporterSettings->LandscapeMaterialLayerNames.Num() == 0
			|| ImporterSettings->WeightmapFileNames.Num() < ImporterSettings->LandscapeMaterialLayerNames.Num());})
			   .ButtonColorAndOpacity(FColor::Emerald)
			   .OnClicked(this, &SGaeaImportWindow::OnCreateLandscapeClicked)
		   ]
	   ]
	);

}


void SGaeaImportWindow::CreateDetailsView()
{
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	
	FDetailsViewArgs Args;
	Args.bAllowSearch = false;
	Args.bHideSelectionTip = true;
	Args.bShowScrollBar = true;

	ImporterSettings = NewObject<UImporterPanelSettings>();
	ImporterSettings->AddToRoot();
	PropertyWidget = PropertyModule.CreateDetailView(Args);
	PropertyWidget->SetObject(ImporterSettings);

	ImporterSettings->Components = FIntPoint(8,8);
	ImporterSettings->Resolution = FIntPoint(505,505);
	ImporterSettings->TotalComponents = ImporterSettings->Components.X * ImporterSettings->Components.Y;
}

FReply SGaeaImportWindow::OnImportClicked() const
{
	if (UGaeaSubsystem* Manager = UGaeaSubsystem::GetGaeaSubsystem())
	{
		check(ImporterSettings != nullptr); // check if Importer Settings is valid
		Manager->ImportHeightmap(ImporterSettings->HeightMapFileName, ImporterSettings->jsonFileName, ImporterSettings->Scale, ImporterSettings->Location, ImporterSettings->WeightmapFileNames, ImporterSettings->StoredPath); // Set heightmap path, json path and scale
		UE_LOG(GaeaWindow, Display, TEXT("Heightmap file path is: %s"), *ImporterSettings->HeightMapFileName); // Log the heightmap file path
		UE_LOG(GaeaWindow, Display, TEXT("Json file path is: %s"), *ImporterSettings->jsonFileName); // Log the heightmap file path
		UE_LOG(GaeaWindow, Display, TEXT("Scale value is: %s"), *ImporterSettings->Scale.ToString()); // Log the scale
		return FReply::Handled();
	}
	return FReply::Handled();
}

FReply SGaeaImportWindow::OnCreateLandscapeClicked()
{
	if (UGaeaSubsystem* Manager = UGaeaSubsystem::GetGaeaSubsystem())
	{
		Manager->CreateLandscapeActor(ImporterSettings);
		return FReply::Handled();
	}
		
	return FReply::Handled();
}
