// Fill out your copyright notice in the Description page of Project Settings.


#include "GaeaCommands.h"
#include "InputCoreTypes.h"

#define LOCTEXT_NAMESPACE "FGaea"

void FGaeaCommands::RegisterCommands()
{
	UI_COMMAND(OpenImporter, "Open Importer", "Opens the Landscape Importer Window", EUserInterfaceActionType::Button, FInputChord(EKeys::P, EModifierKey::Control | EModifierKey::Alt));
	UI_COMMAND(DeleteSelectedWPLandscape, "Delete Selected WP Landscape", "Deletes a World Partitioned Landscape and its proxies", EUserInterfaceActionType::None, FInputChord(EKeys::V, EModifierKey::Control));
}


#undef LOCTEXT_NAMESPACE