// Fill out your copyright notice in the Description page of Project Settings.


#include "GaeaLandscapeComponent.h"
#include "Engine.h"

// Sets default values for this component's properties
UGaeaLandscapeComponent::UGaeaLandscapeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	bIsEditorOnly = true;

	// ...
	
	
}


// Called when the game starts
void UGaeaLandscapeComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGaeaLandscapeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UGaeaLandscapeComponent::DestroyComponent(bool bPromoteChildren)
{
	if (GEngine)
	{
		// Display a message on the screen
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Attempted to delete the Gaea Landscape Component, but this operation is not allowed on landscapes created with the Gaea plugin."));
	}
}

