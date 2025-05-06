#include "GaeaUEToolsEditor.h"
#include "GaeaEditorStyle.h"
#include "GaeaSubsystem.h"
#include "GaeaCommands.h"
#include "LevelEditor.h"
#include "Misc/CoreDelegates.h"
#include "Subsystems/EditorActorSubsystem.h"
#include "GaeaLandscapeComponent.h"
#include "Landscape.h"



#define LOCTEXT_NAMESPACE "FGaeaUEToolsEditorModule"

void FGaeaUEToolsEditorModule::StartupModule()
{
	FGaeaEditorStyle::Initialize();
	FGaeaCommands::Register();
	/*UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(
			this, &FGaeaUEToolsEditorModule::RegisterMCWindow));*/ // Register Material Creator Callback

	
	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(
			this, &FGaeaUEToolsEditorModule::RegisterGaeaActorMenu));
	
	
	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(
				this, &FGaeaUEToolsEditorModule::RegisterImporterWindow)); // Register Importer Callback

	// Bind the commands
	const FLevelEditorModule& LevelEditor = FModuleManager::GetModuleChecked<FLevelEditorModule>("LevelEditor");
	const TSharedRef<FUICommandList> Commands = LevelEditor.GetGlobalLevelEditorActions();
 
	Commands->MapAction(
		FGaeaCommands::Get().OpenImporter,
		FExecuteAction::CreateLambda([this]()
		{
			
			UE_LOG(LogTemp, Log, TEXT("Opening Gaea Landscape Importer Window"));
			if (UGaeaSubsystem* GSubsystem = UGaeaSubsystem::GetGaeaSubsystem())
			{
			//UE_LOG(LogTemp, Log, TEXT("Opened Gaea Landscape Importer Window."));
			GSubsystem->SpawnGImporterWindow();
			}
			
		})
	);
	
	
}

void FGaeaUEToolsEditorModule::ShutdownModule()
{
	FGaeaEditorStyle::Shutdown();
	FGaeaCommands::Unregister();
    UToolMenus::UnregisterOwner(this); //Unregister menu entry
}

/*void FGaeaUEToolsEditorModule::RegisterMCWindow()
{
	//Register owner for menu entry
	FToolMenuOwnerScoped OwnerScoped(this);

	//Set our menu entry name
	constexpr TCHAR ParentMenuName[] = TEXT("ContentBrowser.Toolbar");
	UToolMenu* GaeaToolBar = UToolMenus::Get()->ExtendMenu(ParentMenuName);
	GaeaToolBar->StyleName = TEXT("GaeaToolbar");

	//Find the section of the editor menu we want to add to
	//FToolMenuSection& Section = GaeaToolBar->FindOrAddSection("Tools");
	FToolMenuSection& Section = GaeaToolBar->AddSection(TEXT("Gaea Material Creator"), LOCTEXT("GaeaMaterialTools_Label", "GaeaMaterialTools"));
	
	//Create and define our UI action
	FToolUIAction OpenGaeaMaterialAction;
	OpenGaeaMaterialAction.ExecuteAction = FToolMenuExecuteAction::CreateLambda([](const FToolMenuContext& InContext)
	{
		if ( UGaeaSubsystem* Manager = UGaeaSubsystem::GetGaeaSubsystem())
		{
			Manager->SpawnGMCWindow(); // Spawn Material Creator Window
		}
	}
	);
	
	//Create our custom toolbar entry
	const FToolMenuEntry OpenGaeaLandscapeMaterialCreator = FToolMenuEntry::InitToolBarButton(
	   TEXT("OpenGaeaLandscapeMaterialCreator"),
	   OpenGaeaMaterialAction,
	   LOCTEXT("OpenGaeaLandscapeMaterialCreator_Label", "Gaea Landscape Material Creation"),
	   LOCTEXT("OpenGaeaLandscapeMaterialCreator_Label_Description", "Opens Gaea Material Creator"),
	   FSlateIcon(FAppStyle::Get().GetStyleSetName(), TEXT("ClassIcon.Material")))
	   ;

	//Add our custom menu entry to our previously selected menu section
	Section.AddEntry(OpenGaeaLandscapeMaterialCreator);
}*/

void FGaeaUEToolsEditorModule::RegisterImporterWindow()
{
	//Register owner for menu entry
	FToolMenuOwnerScoped OwnerScoped(this);

	//Set our menu entry name
	constexpr TCHAR ParentMenuName[] = TEXT("LevelEditor.LevelEditorToolBar.User");
	UToolMenu* GaeaToolBar = UToolMenus::Get()->ExtendMenu(ParentMenuName);
	GaeaToolBar->StyleName = TEXT("GaeaToolbar");

	//Find the section of the editor menu we want to add to
	//FToolMenuSection& Section = GaeaToolBar->FindOrAddSection("User");
	FToolMenuSection& Section = GaeaToolBar->AddSection(TEXT("Gaea Landscape Importer"), LOCTEXT("GaeaLandscapeImporter_Label", "GaeaImporterTools"));
	
	//Create and define our UI action
	FToolUIAction OpenGaeaImporter;
	OpenGaeaImporter.ExecuteAction = FToolMenuExecuteAction::CreateLambda([](const FToolMenuContext& InContext)
	{
		if ( UGaeaSubsystem* Manager = UGaeaSubsystem::GetGaeaSubsystem())
		{
			Manager->SpawnGImporterWindow(); // Spawn Importer Window
		}
	}
	);
	
	//Create our custom toolbar entry - OLD. Does not work with editor shortcut key.
	/*const FToolMenuEntry OpenGaeaLandscapeImporter = FToolMenuEntry::InitToolBarButton(
	   TEXT("OpenGaeaLandscapeImporter"),
	   OpenGaeaImporter,
	   LOCTEXT("OpenGaeaLandscapeImporter_Label", "Gaea Landscape Importer"),
	   LOCTEXT("OpenGaeaLandscapeImporter_Label_Description", "Opens Gaea Landscape Importer"),
	   //FSlateIcon(FAppStyle::Get().GetStyleSetName(), TEXT("ClassIcon.LandscapeComponent")));
	   FSlateIcon(FGaeaEditorStyle::GetStyleSetName(), TEXT("ImporterIcon"))
	   );*/

	const FToolMenuEntry OpenGaeaLandscapeImporter = FToolMenuEntry::InitToolBarButton(
	FGaeaCommands::Get().OpenImporter,
	LOCTEXT("OpenGaeaLandscapeImporter_Label", "Gaea Landscape Importer"),
	LOCTEXT("OpenGaeaLandscapeImporter_Label_Description", "Opens Gaea Landscape Importer"),
	   FSlateIcon(FGaeaEditorStyle::GetStyleSetName(), TEXT("ImporterIcon"))
	   );
	

	//Add our custom menu entry to our previously selected menu section
	Section.AddEntry(OpenGaeaLandscapeImporter);
}

void FGaeaUEToolsEditorModule::RegisterGaeaActorMenu()
{
	// Register owner for menu entry
	FToolMenuOwnerScoped OwnerScoped(this);

	// Create menu entry button in a new sub-menu
	UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.ActorContextMenu");
	Menu->AddDynamicSection("GaeaOptions", FNewToolMenuDelegate::CreateLambda([this](UToolMenu* InMenu)
{
	// This delegate is called when it is time to create the menu section
	UEditorActorSubsystem* ActorSubsystem = GEditor->GetEditorSubsystem<UEditorActorSubsystem>();
	if (ActorSubsystem)
	{
		const TArray<AActor*>& SelectedActors = ActorSubsystem->GetSelectedLevelActors();
		if (SelectedActors.Num() > 0)
		{
			AActor* Actor = SelectedActors[0];
			if (Actor && Actor->GetClass()->IsChildOf(ALandscape::StaticClass()))
			{
				if (UGaeaLandscapeComponent* GaeaComponent = Actor->FindComponentByClass<UGaeaLandscapeComponent>())
				{
					// If a Landscape is selected, then add an item to the section
					FToolMenuSection& Section = InMenu->AddSection("GaeaOptionsSection",
						FText::FromString("Gaea Options"),
						FToolMenuInsert("ActorGeneral", EToolMenuInsertType::Before));

					Section.AddSubMenu(
						"GaeaLandscapeSubMenu", 
						FText::FromString("Gaea Landscape Actions"), 
						FText::FromString("Contains various actions for landscapes imported from Gaea"), 
						FNewMenuDelegate::CreateRaw(this, &FGaeaUEToolsEditorModule::RefreshGaeaLandscape),
						false, 
						FSlateIcon(FGaeaEditorStyle::GetStyleSetName(), TEXT("ImporterIcon"))
	);
				}
			}
		}
	}
}));
	
}

void FGaeaUEToolsEditorModule::RefreshGaeaLandscape(FMenuBuilder& MenuBuilder)
{
	FUIAction ExecuteReimportGaeaLandscape(
	FExecuteAction::CreateLambda([]() {
		if (UGaeaSubsystem* Manager = UGaeaSubsystem::GetGaeaSubsystem())
		{
			UWorld* World = GEditor->GetEditorWorldContext().World();
	if (World)
	{
		if (World->IsPartitionedWorld())
		{
			Manager->ReimportGaeaWPTerrain(); // Reimport for World Partition
		}
		else
		{
			Manager->ReimportGaeaTerrain(); // Reimport for standard landscape
		}
	} // ReimportTerrain
		}
	})
);

	MenuBuilder.AddMenuEntry(
		FText::FromString("Refresh Landscape in Place"),
		FText::FromString("Clears current landscape actor internal data and fills with the associated heightmap/weightmaps"),
		FSlateIcon(),
		ExecuteReimportGaeaLandscape
	);
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FGaeaUEToolsEditorModule, GaeaUEToolsEditor)