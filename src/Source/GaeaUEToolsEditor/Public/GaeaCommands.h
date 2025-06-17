// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "Framework/Commands/Commands.h"
#include "EditorStyleSet.h"


/**
 * 
 */
class GAEAUETOOLSEDITOR_API FGaeaCommands : public TCommands<FGaeaCommands>
{
public:
	
	FGaeaCommands() : TCommands(TEXT("Gaea"), NSLOCTEXT("Contexts", "Gaea", "Gaea Commands"), NAME_None, FEditorStyle::GetAppStyleSetName())
	{
	}

	virtual void RegisterCommands() override;

	TSharedPtr<FUICommandInfo> OpenImporter;
};
