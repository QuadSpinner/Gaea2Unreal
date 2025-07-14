#pragma once

//#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "GaeaSubsystem.h"

DECLARE_LOG_CATEGORY_EXTERN(GaeaUETools, Log, All);

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
	void GaeaActorActions(FMenuBuilder& MenuBuilder);

	void RegisterLandscapeActorMenu();
	
    
private:
	
};


