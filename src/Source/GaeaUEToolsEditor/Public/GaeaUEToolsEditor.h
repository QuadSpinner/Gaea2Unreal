#pragma once

//#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

static FString GaeaPluginFolderName {"GaeaUnrealTools"};
static FString MarketplaceFolderName {"Marketplace"};

class FToolBarBuilder;
class FMenuBuilder;

class FGaeaUEToolsEditorModule : public IModuleInterface
{
public:
    
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

   // void RegisterMCWindow();

	// Primary importer window
    void RegisterImporterWindow();

	// Submenu for all landscape actor options
	void RegisterGaeaActorMenu();

	// Entry for refreshing landscape from Gaea heightmap and json
	void RefreshGaeaLandscape(FMenuBuilder& MenuBuilder);
    
private:
    
};


