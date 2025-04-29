// Fill out your copyright notice in the Description page of Project Settings.


#include "GaeaSubsystem.h"

#include "DesktopPlatformModule.h"
#include "FileHelpers.h"
#include "Widgets/SWindow.h"
#include "GWindow.h"
#include "LandscapeEditorObject.h"
#include "SlateBasics.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SButton.h"
#include "Landscape.h"
#include "LandscapeProxy.h"
#include "LandscapeRegionUtils.h"
#include "LandscapeStreamingProxy.h"
#include "Serialization/JsonSerializer.h"
#include "JsonObjectConverter.h"
#include "LandscapeEditorUtils.h"
#include "LandscapeSubsystem.h"
#include "LocationVolume.h"
#include "ActorFactories/ActorFactory.h"
#include "ToolMenus.h"
#include "Builders/CubeBuilder.h"
#include "Subsystems/EditorActorSubsystem.h"
#include "VT/VirtualTexture.h"
#include "GaeaLandscapeComponent.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetToolsModule.h"
#include "AsyncTreeDifferences.h"
#include "EditorAssetLibrary.h"
#include "Modules/ModuleManager.h"
#include "Misc/PackageName.h"
#include "LandscapeInfo.h"
#include "Editor.h"
#include "Materials/Material.h"



#include "Materials/MaterialExpressionLandscapeLayerBlend.h"


DEFINE_LOG_CATEGORY_STATIC(LogGaeaSubsystem, Log, All);

#define LOCTEXT_NAMESPACE "GaeaSubsystem"


UGaeaSubsystem* UGaeaSubsystem::GetGaeaSubsystem()
{
	return GEditor->GetEditorSubsystem<UGaeaSubsystem>();
}

/*void UGaeaSubsystem::SpawnGMCWindow()
{
	//Load Property Module
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	
	//Create Details View Arguments
	FDetailsViewArgs Args;
	Args.bAllowSearch = false;
	Args.bHideSelectionTip = true;
	Args.bShowScrollBar = true;
	
	//Create Panel Settings Object
	PanelSettings = NewObject<UGMCSettings>();
	PropertyWidget = PropertyModule.CreateDetailView(Args);
	PropertyWidget->SetObject(PanelSettings);
	
	// Create Gaea Window Instance
	const TSharedRef<SWindow> WindowRef = SNew(SGaeaWindow)
		.Title(FText::FromString("Gaea Landscape Material Creator"))
		.ClientSize(FVector2D(475, 200))
		.SizingRule(ESizingRule::UserSized);
    
	
	// Create Window with Details View and Button
	WindowRef->SetContent(
		SNew(SVerticalBox) 
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
		//.Padding(0)
		.AutoHeight()  
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Bottom)
		[
			SNew(SButton)
			.Text(FText::FromString(("Generate Landscape Material")))
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			.ButtonColorAndOpacity(FColor::Emerald)   
		]
	);
	
	// Check if TWeakPtr is valid before spawning a window
	if(WindowValidator.IsValid()==false)
	{
		FSlateApplication::Get().AddWindow(WindowRef);
		/*if(GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, TEXT("Spawned the Window."));#1#
		WindowValidator = WindowRef;
	}
		else
		{
			WindowValidator.Pin()->BringToFront(true);
			/*if(GEngine)
				GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Window Exists Already."));#1#
			
		}
	
	
}*/

void UGaeaSubsystem::SpawnGImporterWindow()
{
	if(ImporterWindowValidator.IsValid()==false)
	{
		const TSharedRef<SWindow> WindowRef = SNew(SGaeaImportWindow)
		.Title(FText::FromString("Gaea Landscape Importer"))
		.ClientSize(FVector2D(500, 385))
		.SizingRule(ESizingRule::UserSized);
		
		FSlateApplication::Get().AddWindow(WindowRef);
		ImporterWindowValidator = WindowRef;
		
	}
	else
	{
		ImporterWindowValidator.Pin()->BringToFront(true);
		
	}
}

void UGaeaSubsystem::ReimportGaeaTerrain()
{
	TArray<ULandscapeLayerInfoObject*> InfoObjects;
	TArray<FLandscapeImportDescriptor> WeightOutImportDescriptors;
	TArray<ELandscapeImportResult> WeightImportResults;
	TArray<FLandscapeImportLayerInfo> MaterialImportLayers;
	TArray<FText> WeightOutMessage;
	bool ReimportWeightmaps = false;
	TArray<uint8> WeightOutData;
	TArray<uint8> FinalWeightOutData;
	
	UEditorActorSubsystem* ActorSubsystem = GEditor->GetEditorSubsystem<UEditorActorSubsystem>(); // Get an instance of the Editor Actor Subsystem.
	if (ActorSubsystem)
	{
		const TArray<AActor*>& SelectedActors = ActorSubsystem->GetSelectedLevelActors(); // Use the subsystem instance to get references to selected actors.
		UGaeaLandscapeComponent* GaeaComponent = SelectedActors[0]->FindComponentByClass<UGaeaLandscapeComponent>(); // Check for a Gaea Landscape Component.
		if (SelectedActors.Num() > 0 && GaeaComponent) // Check if component is valid and we actually have a selected actor.
		{
			AActor* Actor = SelectedActors[0];
			ALandscape* Landscape = Cast<ALandscape>(Actor);
			bool EditLayers = Landscape->bCanHaveLayersContent; // Create bool from bCanHaveLayersContent. This is used for determining which terrain refresh method we use later.

			ULandscapeInfo* LandscapeActorInfo = Landscape->GetLandscapeInfo();

			FString JsonPath = GaeaComponent->DefinitionFilepath.FilePath;
			FString HeightPath = GaeaComponent->HeightmapFilepath.FilePath;

			bool bStatus = false;
			FString JsonMessage = "";
			const FGaeaJson GaeaDefinition = CreateStructFromJson(JsonPath, bStatus, JsonMessage);
		
			if(bStatus)
			{
				UE_LOG(LogTemp, Display, TEXT("ScaleX: %f, ScaleY: %f, Height: %f, Resolution: %d"), 
			   GaeaDefinition.ScaleX, GaeaDefinition.ScaleY, GaeaDefinition.Height, GaeaDefinition.Resolution);
				FVector LandscapeLocation = FVector(0,0,GaeaDefinition.Height*100/2);
				FVector LandscapeScale = FVector(GaeaDefinition.ScaleX * 100 / GaeaDefinition.Resolution,GaeaDefinition.ScaleY * 100 / GaeaDefinition.Resolution,GaeaDefinition.Height * 100 / 512); // Apply scaling formula to our passed in scale variable from the ImporterPanelSettings

				constexpr bool bSingleFile = true;
				FLandscapeImportDescriptor OutImportDescriptor;
				OutImportDescriptor.Scale = LandscapeScale;
				FText OutMessage;
				
				
				ULandscapeEditorObject* DefaultValueObject = ULandscapeEditorObject::StaticClass()->GetDefaultObject<ULandscapeEditorObject>(); // Create Landscape Editor Object instance
				check(DefaultValueObject);
	
				int32 OutQuadsPerSection = DefaultValueObject->NewLandscape_QuadsPerSection;
				int32 OutSectionsPerComponent = DefaultValueObject->NewLandscape_SectionsPerComponent;
				FIntPoint OutComponentCount = DefaultValueObject->NewLandscape_ComponentCount;
				
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				/// Heightmap Data Setup
				
				ELandscapeImportResult ImportResult = FLandscapeImportHelper::GetHeightmapImportDescriptor(HeightPath, bSingleFile, false, OutImportDescriptor, OutMessage);

				int32 DescriptorIndex = OutImportDescriptor.FileResolutions.Num() / 2;
				
				FLandscapeImportHelper::ChooseBestComponentSizeForImport(OutImportDescriptor.ImportResolutions[DescriptorIndex].Width, OutImportDescriptor.ImportResolutions[DescriptorIndex].Height, OutQuadsPerSection, OutSectionsPerComponent, OutComponentCount);
				
				TArray<uint16> ImportData;
				ImportResult = FLandscapeImportHelper::GetHeightmapImportData(OutImportDescriptor, DescriptorIndex, ImportData, OutMessage);

				const int32 QuadsPerComponent = OutSectionsPerComponent * OutQuadsPerSection;
				const int32 SizeX = OutComponentCount.X * QuadsPerComponent + 1;
				const int32 SizeY = OutComponentCount.Y * QuadsPerComponent + 1;

				TArray<uint16> FinalHeightData;
				FLandscapeImportHelper::TransformHeightmapImportData(ImportData, FinalHeightData, OutImportDescriptor.ImportResolutions[DescriptorIndex], FLandscapeImportResolution(SizeX, SizeY), ELandscapeImportTransformType::ExpandCentered);

				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				/// Setup prerequisites for SetHeightData and SetAlphaData

				FIntRect ComponentsRect = Landscape->GetBoundingRect() + Landscape->LandscapeSectionOffset;
				const int32 CompSizeX = ComponentsRect.Width() + 1;
				const int32 CompSizeY = ComponentsRect.Height() + 1;

				FLandscapeEditDataInterface LandscapeEdit(Landscape->GetLandscapeInfo());
				
				if (EditLayers)
				{
					const FLandscapeLayer* BaseLayer = Landscape->GetLayerConst(0); //The old GetLayer() function has been deprecated. Use this to avoid nullptr crash.
					FGuid ID = BaseLayer->Guid;
					LandscapeEdit.SetEditLayer(ID);
				}
				
				
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				/// Weightmap Data Setup and SetAlphaData Execution
				
				if (LandscapeActorInfo && !GaeaComponent->WeightmapFilepaths.IsEmpty())
				{
					
					// Loop through all layers associated with the landscape and get the relevant layer objects.
					for (const FLandscapeInfoLayerSettings& LayerSettings : LandscapeActorInfo->Layers)
					{
						ULandscapeLayerInfoObject* LayerInfoObject = LayerSettings.LayerInfoObj;
						
						if (LayerInfoObject)
						{
							InfoObjects.Add(LayerInfoObject);
							
						}
					}
					
					for (int32 i = 0; i < InfoObjects.Num(); i++)
					{
						if (InfoObjects[i])
						{
							Landscape->ClearLayer(i,nullptr,Clear_Weightmap); // Have to clear all layers, or SetAlphaData will accumulate or present with visual artifacting.
						}
					}
					
					WeightOutMessage.AddDefaulted(InfoObjects.Num());
					WeightOutImportDescriptors.AddDefaulted(InfoObjects.Num());
					WeightImportResults.AddDefaulted(InfoObjects.Num());

					TArray<uint8> ClearWeightData;
					ClearWeightData.SetNum(CompSizeX * CompSizeY); // Ensure the size matches the landscape component
					FMemory::Memset(ClearWeightData.GetData(), 255, CompSizeX * CompSizeY);
					

					if (GaeaComponent->WeightmapFilepaths.Num() >= InfoObjects.Num() - 1)
					{
						LandscapeEdit.SetAlphaData(InfoObjects[0], ComponentsRect.Min.X, ComponentsRect.Min.Y, ComponentsRect.Max.X, ComponentsRect.Max.Y, ClearWeightData.GetData(), 0, ELandscapeLayerPaintingRestriction::None, true, false);
						
						for(int32 i = 1; i < InfoObjects.Num(); i++)
						{
							int32 WeightmapIndex = i - 1;
							if (WeightmapIndex < GaeaComponent->WeightmapFilepaths.Num())
							{
								FLandscapeImportHelper::GetWeightmapImportDescriptor(GaeaComponent->WeightmapFilepaths[WeightmapIndex].FilePath, true, false, InfoObjects[i]->LayerName, WeightOutImportDescriptors[i], WeightOutMessage[i]);
								FLandscapeImportHelper::GetWeightmapImportData(WeightOutImportDescriptors[i], DescriptorIndex, InfoObjects[i]->LayerName, WeightOutData, WeightOutMessage[i]);
								FLandscapeImportHelper::TransformWeightmapImportData(WeightOutData, FinalWeightOutData, OutImportDescriptor.ImportResolutions[DescriptorIndex], FLandscapeImportResolution(SizeX, SizeY), ELandscapeImportTransformType::ExpandCentered);
								
								if(FinalWeightOutData.Num() == CompSizeX * CompSizeY)
								{
									LandscapeEdit.SetAlphaData(InfoObjects[i], ComponentsRect.Min.X, ComponentsRect.Min.Y, ComponentsRect.Max.X, ComponentsRect.Max.Y, FinalWeightOutData.GetData(), 0, ELandscapeLayerPaintingRestriction::None, true, false );
								}
								
							}
							Landscape->RequestLayersContentUpdateForceAll(Update_All);
						}
						
					}
						
					}

				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				/// Execute SetHeightData
	
				if (FinalHeightData.Num() == CompSizeX * CompSizeY)
				{
					if(EditLayers) // Use SetHeightData from FLandscapeEditDataInterface or SetData from FHeightmapAccessor depending on bCanHaveLayersContent.
					{
						LandscapeEdit.SetHeightData( ComponentsRect.Min.X, ComponentsRect.Min.Y, ComponentsRect.Max.X, ComponentsRect.Max.Y,
							FinalHeightData.GetData(),
							0,
							true,
							nullptr, // Normals data
							nullptr, // Alpha blend data
							nullptr, // Raise/lower data
							false, // Do not create new components
							nullptr, // No custom heightmap texture
							nullptr, // No XY offsetmap texture
							true, // Update bounds
							true, // Update collision
							true  // Generate mipmaps
		);
			
						
						Landscape->RequestLayersContentUpdateForceAll(ELandscapeLayerUpdateMode::Update_Heightmap_All);
					}
					else
					{
						FHeightmapAccessor<true> HeightmapAccessor(Landscape->GetLandscapeInfo());
						HeightmapAccessor.SetData(ComponentsRect.Min.X, ComponentsRect.Min.Y, ComponentsRect.Max.X, ComponentsRect.Max.Y,
							FinalHeightData.GetData());
						
					}
						
					Landscape->SetActorScale3D(LandscapeScale);
					
					}
				else
				{
					if (GEngine)
					{
						GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Original landscape resolution does not match the reimport texture resolution"));
					}
				}
				
				}
				
			
			}
		}
}

void UGaeaSubsystem::ReimportGaeaWPTerrain()
{
	TArray<ULandscapeLayerInfoObject*> InfoObjects;
	TArray<FLandscapeImportDescriptor> WeightOutImportDescriptors;
	TArray<ELandscapeImportResult> WeightImportResults;
	TArray<FText> WeightOutMessage;
	bool ReimportWeightmaps = false;
	TArray<uint8> WeightOutData;
	TArray<uint8> FinalWeightOutData;
	
	UEditorActorSubsystem* ActorSubsystem = GEditor->GetEditorSubsystem<UEditorActorSubsystem>(); // Get an instance of the Editor Actor Subsystem.
	if (ActorSubsystem)
	{
		const TArray<AActor*>& SelectedActors = ActorSubsystem->GetSelectedLevelActors();
		if (SelectedActors.Num() > 0)
		{
			AActor* Actor = SelectedActors[0];
			ALandscape* Landscape = Cast<ALandscape>(Actor);
			ULandscapeInfo* LandscapeActorInfo = Landscape->GetLandscapeInfo();
        	
			if (Landscape)
			{
				UGaeaLandscapeComponent* GaeaComponent = Actor->FindComponentByClass<UGaeaLandscapeComponent>();
				if (GaeaComponent)
				{
					FString JsonPath = GaeaComponent->DefinitionFilepath.FilePath;
					FString HeightPath = GaeaComponent->HeightmapFilepath.FilePath;

					bool bStatus = false;
					FString JsonMessage = "";
					const FGaeaJson GaeaDefinition = CreateStructFromJson(JsonPath, bStatus, JsonMessage);

					if(bStatus)
					{
						FVector LandscapeLocation = FVector(0, 0, GaeaDefinition.Height * 100 / 2);
						FVector LandscapeScale = FVector(
							GaeaDefinition.ScaleX * 100 / GaeaDefinition.Resolution,
							GaeaDefinition.ScaleY * 100 / GaeaDefinition.Resolution,
							GaeaDefinition.Height * 100 / 512
						);

						constexpr bool bSingleFile = true;
						FLandscapeImportDescriptor OutImportDescriptor;
						OutImportDescriptor.Scale = LandscapeScale;
						FText OutMessage;

						ELandscapeImportResult ImportResult = FLandscapeImportHelper::GetHeightmapImportDescriptor(HeightPath, bSingleFile, false, OutImportDescriptor, OutMessage);

						if (ImportResult == ELandscapeImportResult::Success)
						{
							int32 DescriptorIndex = OutImportDescriptor.FileResolutions.Num() / 2;

							ULandscapeEditorObject* DefaultValueObject = ULandscapeEditorObject::StaticClass()->GetDefaultObject<ULandscapeEditorObject>();
							check(DefaultValueObject);

							int32 OutQuadsPerSection = DefaultValueObject->NewLandscape_QuadsPerSection;
							int32 OutSectionsPerComponent = DefaultValueObject->NewLandscape_SectionsPerComponent;
							FIntPoint OutComponentCount = DefaultValueObject->NewLandscape_ComponentCount;

							FLandscapeImportHelper::ChooseBestComponentSizeForImport(
								OutImportDescriptor.ImportResolutions[DescriptorIndex].Width,
								OutImportDescriptor.ImportResolutions[DescriptorIndex].Height,
								OutQuadsPerSection,
								OutSectionsPerComponent,
								OutComponentCount
							);

							TArray<uint16> ImportData;
							ImportResult = FLandscapeImportHelper::GetHeightmapImportData(OutImportDescriptor, DescriptorIndex, ImportData, OutMessage);

							if (ImportResult == ELandscapeImportResult::Success)
							{
								TArray<uint16> FinalHeightData;

								// Calculate SizeX and SizeY based on the component count and the number of quads per component
								const int32 QuadsPerComponent = OutSectionsPerComponent * OutQuadsPerSection;
								const int32 SizeX = OutComponentCount.X * QuadsPerComponent + 1;
								const int32 SizeY = OutComponentCount.Y * QuadsPerComponent + 1;

								FLandscapeImportHelper::TransformHeightmapImportData(
									ImportData,
									FinalHeightData,
									OutImportDescriptor.ImportResolutions[DescriptorIndex],
									FLandscapeImportResolution(SizeX, SizeY),
									ELandscapeImportTransformType::ExpandCentered
								);
                            	
								if (LandscapeActorInfo && !GaeaComponent->WeightmapFilepaths.IsEmpty())
								{
									// Loop through all layers associated with the landscape and get the relevant layer objects.
									for (const FLandscapeInfoLayerSettings& LayerSettings : LandscapeActorInfo->Layers)
									{
										ULandscapeLayerInfoObject* LayerInfoObject = LayerSettings.LayerInfoObj;
        
										if (LayerInfoObject)
										{
											InfoObjects.Add(LayerInfoObject);
										}
									}

									for (int32 i = 0; i < InfoObjects.Num(); i++)
									{
										if (InfoObjects[i])
										{
											Landscape->ClearLayer(i,nullptr,Clear_Weightmap); // Have to clear all layers, or SetAlphaData will accumulate or present with visual artifacting.
										}
									}
					
									WeightOutMessage.AddDefaulted(InfoObjects.Num());
									WeightOutImportDescriptors.AddDefaulted(InfoObjects.Num());
									WeightImportResults.AddDefaulted(InfoObjects.Num());
								}

								// Collect and process each landscape proxy
								TArray<ALandscapeProxy*> AllProxies;
								Landscape->GetLandscapeInfo()->ForEachLandscapeProxy([&AllProxies](ALandscapeProxy* Proxy)
								{
									AllProxies.Add(Proxy);
									return true; // Continue iteration
								});

								for (ALandscapeProxy* Proxy : AllProxies)
								{
									FLandscapeEditDataInterface LandscapeEdit(Proxy->GetLandscapeInfo());

									FIntRect ComponentsRect = Proxy->GetBoundingRect() + Proxy->LandscapeSectionOffset;
									const int32 CompSizeX = ComponentsRect.Width() + 1;
									const int32 CompSizeY = ComponentsRect.Height() + 1;

									

									// Define the region in FinalHeightData corresponding to this proxy
									TArray<uint16> ProxyHeightData;
									ProxyHeightData.SetNum(CompSizeX * CompSizeY);

									for (int32 Y = 0; Y < CompSizeY; ++Y)
									{
										for (int32 X = 0; X < CompSizeX; ++X)
										{
											int32 SrcX = ComponentsRect.Min.X + X;
											int32 SrcY = ComponentsRect.Min.Y + Y;
											int32 SrcIndex = SrcY * SizeX + SrcX; // SizeX is the width of the full landscape

											int32 DestIndex = Y * CompSizeX + X;
											if (FinalHeightData.IsValidIndex(SrcIndex) && ProxyHeightData.IsValidIndex(DestIndex))
											{
												ProxyHeightData[DestIndex] = FinalHeightData[SrcIndex];
											}
										}
									}

									if (ProxyHeightData.Num() == CompSizeX * CompSizeY)
									{
										if (Landscape->bCanHaveLayersContent)
										{
											const FLandscapeLayer* BaseLayer = Landscape->GetLayerConst(0);
											FGuid ID = BaseLayer->Guid;
											LandscapeEdit.SetEditLayer(ID);

											LandscapeEdit.SetHeightData(
												ComponentsRect.Min.X, ComponentsRect.Min.Y,
												ComponentsRect.Max.X, ComponentsRect.Max.Y,
												ProxyHeightData.GetData(),
												0, true, nullptr, nullptr, nullptr,
												false, nullptr, nullptr,
												true, true, true
											);

											Landscape->RequestLayersContentUpdateForceAll(ELandscapeLayerUpdateMode::Update_All);
										}
										else
										{
                                        	
											FHeightmapAccessor<true> HeightmapAccessor(Proxy->GetLandscapeInfo());
											HeightmapAccessor.SetData(
												ComponentsRect.Min.X, ComponentsRect.Min.Y,
												ComponentsRect.Max.X, ComponentsRect.Max.Y,
												ProxyHeightData.GetData()
											);
										}

										Proxy->SetActorScale3D(LandscapeScale);
									}
									else
									{
										if (GEngine)
										{
											GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Resolution mismatch for proxy."));
										}
									}
									
                                	
									if(Landscape->bCanHaveLayersContent)
									{
										TArray<uint8> FirstLayerData;
										FirstLayerData.SetNum(CompSizeX * CompSizeY);
										FMemory::Memset(FirstLayerData.GetData(), 255, CompSizeX * CompSizeY);
										LandscapeEdit.SetAlphaData(InfoObjects[0],ComponentsRect.Min.X, ComponentsRect.Min.Y,ComponentsRect.Max.X, ComponentsRect.Max.Y,FirstLayerData.GetData(),0,ELandscapeLayerPaintingRestriction::None,true, false);
										
										for (int32 i = 1; i < InfoObjects.Num(); i++)  // Start from 1 to skip first layer
										{
											int32 WeightmapIndex = i - 1;

											if (WeightmapIndex < GaeaComponent->WeightmapFilepaths.Num())
											{
												FLandscapeImportHelper::GetWeightmapImportDescriptor(GaeaComponent->WeightmapFilepaths[WeightmapIndex].FilePath, true, false, InfoObjects[i]->LayerName, WeightOutImportDescriptors[i], WeightOutMessage[i]);
												FLandscapeImportHelper::GetWeightmapImportData(WeightOutImportDescriptors[i], DescriptorIndex, InfoObjects[i]->LayerName, WeightOutData, WeightOutMessage[i]);
												FLandscapeImportHelper::TransformWeightmapImportData(WeightOutData, FinalWeightOutData, OutImportDescriptor.ImportResolutions[DescriptorIndex], FLandscapeImportResolution(SizeX, SizeY), ELandscapeImportTransformType::ExpandCentered);

												// Apply weightmap data for the current proxy
												TArray<uint8> ProxyWeightData;
												ProxyWeightData.SetNum(CompSizeX * CompSizeY);

												for (int32 Y = 0; Y < CompSizeY; ++Y)
												{
													for (int32 X = 0; X < CompSizeX; ++X)
													{
														int32 SrcX = ComponentsRect.Min.X + X;
														int32 SrcY = ComponentsRect.Min.Y + Y;
														int32 SrcIndex = SrcY * SizeX + SrcX; // SizeX is the width of the full landscape

														int32 DestIndex = Y * CompSizeX + X;
														if (FinalWeightOutData.IsValidIndex(SrcIndex) && ProxyWeightData.IsValidIndex(DestIndex))
														{
															ProxyWeightData[DestIndex] = FinalWeightOutData[SrcIndex];
														}
													}
												}

												if (ProxyWeightData.Num() == CompSizeX * CompSizeY)
												{
													if (Landscape->bCanHaveLayersContent)
													{
														const FLandscapeLayer* BaseLayer = Landscape->GetLayerConst(0);
														FGuid ID = BaseLayer->Guid;
														LandscapeEdit.SetEditLayer(ID);

														LandscapeEdit.SetAlphaData(
															InfoObjects[i], 
															ComponentsRect.Min.X, ComponentsRect.Min.Y,
															ComponentsRect.Max.X, ComponentsRect.Max.Y, 
															ProxyWeightData.GetData(),
															0, ELandscapeLayerPaintingRestriction::None, true, true
														);
													}
												}
												else
												{
													if (GEngine)
													{
														GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Original landscape resolution does not match the reimport texture resolution"));
													}
												}
											}
											
										}
									}
									else
									{
										if (GEngine)
										{
											GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Weightmap reimport currently only works with edit layers."));
										}
									}
									
								}
							}
						}
					}
				}
			}
		}
	}
}

void UGaeaSubsystem::ImportHeightmap(FString& Heightmap, FString& JSON, FVector& Scale, FVector& Location, TArray<FString>& Weightmaps, FString& CachedPath)
{
	check(ImporterWindowValidator!= nullptr);
	JSON.Empty(); // Empty out json path from ImporterPanelSettings
	Heightmap.Empty(); // Empty out heightmap path from ImporterPanelSettings
	
	const TSharedPtr<FGenericWindow> LocalNativeWindow = ImporterWindowValidator.Pin()->GetNativeWindow();
	check(LocalNativeWindow!= nullptr);
	const void* ParentWindow = LocalNativeWindow->GetOSWindowHandle();

	const FString DialogTitle = TEXT("Import Heightmap"); // Create dialog window title.
	const FString DefaultPath = DefaultDialogPath.IsEmpty() ? FPaths::ProjectDir() : DefaultDialogPath; // Set DefaultPath to DefaultDialogPath if it isn't empty, otherwise use ProjectDir().
	const FString DefaultFile = TEXT("");
	FString OutPath = TEXT("");
	const FString FileFilter = TEXT("Heightmap files (*.r16, *.raw, *.png)|*.r16;*.raw;*.png|"); // Heightmap type file filter.

	TArray<FString> SelectedFilePath;

	if (FDesktopPlatformModule::Get()->OpenFileDialog(ParentWindow, DialogTitle, DefaultPath, DefaultFile, FileFilter, EFileDialogFlags::None, SelectedFilePath)) {
		
		Heightmap = SelectedFilePath[0]; // Set path to heightmap.
		
		OutPath = FPaths::GetPath(Heightmap); // Remove asset name & extension to create our folder directory.

		CachedPath = OutPath; // Store path onto details panel uobject for secondary array generation when the frontend array is reordered.

		DefaultDialogPath = OutPath; // Set DefaultDialogPath to OutPath so that next time the user clicks the import button, we open to a previously known directory.
		
		IFileManager& FileManager = IFileManager::Get(); // Get instance of File Manager.
		
		

		TArray<FString> WeightFilesInDirectory;
		
		FileManager.FindFiles(WeightFilesInDirectory, *(OutPath / TEXT("*.png*")), true, false); // Get all pngs from directory.
		
		for(int i = 0; i < WeightFilesInDirectory.Num(); i++) 
		{
			if (WeightFilesInDirectory[i].Contains(TEXT("W_"), ESearchCase::IgnoreCase))
			{
				Weightmaps.Add(WeightFilesInDirectory[i]);
			}
		}

		TArray<FString> FilesInDirectory; // Create array of strings.
		
		FileManager.FindFiles(FilesInDirectory, *(OutPath / TEXT("*.json*")), true, false); // Get all instances of json files from directory.
		
		if (FilesInDirectory.IsEmpty()) // Early exit if json isn't present.
		{
			JSON = TEXT("None");
			UE_LOG(LogTemp, Log, TEXT("No json files found."));
			return;
		}
		
		
		bool bDefinitionFound = false; // Flag to indicate whether a definition file is found

		for(int i = 0; i < FilesInDirectory.Num(); i++) 
		{
			if (FilesInDirectory[i].Contains(TEXT("definition"), ESearchCase::IgnoreCase))
			{
				JSON = FPaths::Combine(*OutPath, *FilesInDirectory[i]); // Write json filepath
				bDefinitionFound = true; // Set the flag to true
				break;
			}
		}
	
		if (!bDefinitionFound)
		{
			// If the flag is still false after the loop, no definition file was found
			UE_LOG(LogTemp, Warning, TEXT("No Definition.json found."));
			return;
		}
	}

	else
	{
		// No file was selected; the file dialog was closed without selecting a file.
		UE_LOG(LogTemp, Log, TEXT("Dialog was closed. No files selected"));
			return;
		
	}
		bool bStatus = false;
		FString JsonMessage = "";
		const FGaeaJson GaeaDefinition = CreateStructFromJson(JSON, bStatus, JsonMessage);
	
		if(bStatus)
		{
			UE_LOG(LogTemp, Display, TEXT("ScaleX: %f, ScaleY: %f, Height: %f, Resolution: %d"), 
		   GaeaDefinition.ScaleX, GaeaDefinition.ScaleY, GaeaDefinition.Height, GaeaDefinition.Resolution);
			Location = FVector(0,0,GaeaDefinition.Height*100/2);
			Scale = FVector(GaeaDefinition.ScaleX * 100 / GaeaDefinition.Resolution,GaeaDefinition.ScaleY * 100 / GaeaDefinition.Resolution,GaeaDefinition.Height * 100 / 512); // Apply scaling formula to our passed in scale variable from the ImporterPanelSettings
		}
		
		
	
}	

FString UGaeaSubsystem::ReadStringFromFile(FString Path, bool& bOutSuccess, FString& OutMessage)
{
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*Path))
	{
		bOutSuccess = false;
		OutMessage = FString::Printf(TEXT("Failed to read file - File does not exist - '%s'"), *Path);\
	
		UE_LOG(LogTemp, Error, TEXT("Failed to read file - File does not exist."));
		return "";
	}

	FString OutString = "";

	if(!FFileHelper::LoadFileToString(OutString, *Path))
	{
		bOutSuccess = false;
		OutMessage = FString::Printf(TEXT("Failed to read file - Is this a text file? - '%s'"), *Path);
		UE_LOG(LogTemp, Error, TEXT("Failed to read file - Is this a text file?"));
		return "";
	}

	bOutSuccess = true;
	OutMessage = FString::Printf(TEXT("File read successfully - '%s'"), *Path);
	//UE_LOG(LogTemp, Log, TEXT("File read successfully."));
	return OutString;
	
}

TSharedPtr<FJsonObject> UGaeaSubsystem::ReadJson(FString Path, bool& bOutSuccess, FString& OutMessage)
{
	const FString JSONString = ReadStringFromFile(Path, bOutSuccess, OutMessage);
	if (!bOutSuccess)
	{
		return nullptr;
	}

	TSharedPtr<FJsonObject> RetJsonObject;

	if(!FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(JSONString), RetJsonObject))
	{
		bOutSuccess = false;
		OutMessage = FString::Printf(TEXT("Json read failed - '%s'"), *Path);
		UE_LOG(LogTemp, Error, TEXT("Json read failed."));
		return nullptr;
	}

	bOutSuccess = true;
	OutMessage = FString::Printf(TEXT("Successfully read Json - '%s'"), *Path);
	UE_LOG(LogTemp, Log, TEXT("Successfully read Json."));
	return RetJsonObject;
}

FGaeaJson UGaeaSubsystem::CreateStructFromJson(FString Path, bool& bOutSuccess, FString& OutMessage)
{
	const TSharedPtr<FJsonObject> JsonObject = ReadJson(Path, bOutSuccess, OutMessage);
	if(!bOutSuccess)
	{
		return FGaeaJson();
	}

	FGaeaJson RetGaeaJson;

	if(!FJsonObjectConverter::JsonObjectToUStruct<FGaeaJson>(JsonObject.ToSharedRef(), &RetGaeaJson))
	{
		bOutSuccess = false;
		OutMessage = FString::Printf(TEXT("Json conversion failed - '%s'"), *Path);
		UE_LOG(LogTemp, Error, TEXT("Json conversion failed."));
		return FGaeaJson();
	}

	bOutSuccess = true;
	OutMessage = FString::Printf(TEXT("Json conversion succeeded - '%s'"), *Path);
	//UE_LOG(LogTemp, Log, TEXT("Json conversion succeeded."));
	return RetGaeaJson;
	
}

ALandscape* UGaeaSubsystem::GetLandscape(ULandscapeInfo* LandscapeInfo) const
{
	ALandscape* LandscapeActor = LandscapeInfo->LandscapeActor.Get();
	if (LandscapeActor != nullptr) 
	{
		return LandscapeActor;
	}
	return nullptr;
}

/* FGuid UGaeaSubsystem::GetLayerGuidFromIndex(int32 Index, ULandscapeInfo* LandscapeInfo) const
{
	ALandscape* Landscape = GetLandscape(LandscapeInfo);
	FLandscapeLayer* Layer = Landscape ? Landscape->GetLayer(Index) : nullptr;
	return Layer ? Layer->Guid : FGuid();
}*/

void UGaeaSubsystem::CreateLandscapeActor(UImporterPanelSettings* Settings)
{
	constexpr bool bSingleFile = true;
	FLandscapeImportDescriptor OutImportDescriptor;
	TArray<FLandscapeImportDescriptor> WeightOutImportDescriptors;
	TArray<ELandscapeImportResult> WeightImportResults;
	TArray<FLandscapeImportLayerInfo> MaterialImportLayers;
	TArray<ULandscapeLayerInfoObject*> LayerInfoObjects;
	OutImportDescriptor.Scale = Settings->Scale;
	FText OutMessage;
	TArray<FText> WeightOutMessage;
	bool ImportWeightmaps = false;
	
	UWorld* World = nullptr;
	{
		FWorldContext& EditorWorldContext = GEditor->GetEditorWorldContext();
		World = EditorWorldContext.World(); // We want to create the landscape in the editor world.
	}
	
	ULandscapeSubsystem* LandscapeSubsystem = World->GetSubsystem<ULandscapeSubsystem>();
	bool bIsGridBased = LandscapeSubsystem->IsGridBased();
	
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// Heightmap Import/Data Creation

	ELandscapeImportResult ImportResult = FLandscapeImportHelper::GetHeightmapImportDescriptor(Settings->HeightMapFileName, bSingleFile, Settings->FlipYAxis, OutImportDescriptor, OutMessage);
	int32 DescriptorIndex = OutImportDescriptor.FileResolutions.Num() / 2;
	
	ULandscapeEditorObject* DefaultValueObject = ULandscapeEditorObject::StaticClass()->GetDefaultObject<ULandscapeEditorObject>(); // Create Landscape Editor Object instance
	check(DefaultValueObject);
	
	int32 OutQuadsPerSection = DefaultValueObject->NewLandscape_QuadsPerSection;
	int32 OutSectionsPerComponent = DefaultValueObject->NewLandscape_SectionsPerComponent;
	FIntPoint OutComponentCount = DefaultValueObject->NewLandscape_ComponentCount;

	// We automatically adjust/fit the data so users avoid having to guess.
	FLandscapeImportHelper::ChooseBestComponentSizeForImport(OutImportDescriptor.ImportResolutions[DescriptorIndex].Width, OutImportDescriptor.ImportResolutions[DescriptorIndex].Height, OutQuadsPerSection, OutSectionsPerComponent, OutComponentCount);
	
	TArray<uint16> ImportData;
	ImportResult = FLandscapeImportHelper::GetHeightmapImportData(OutImportDescriptor, DescriptorIndex, ImportData, OutMessage);
	
	
	const int32 QuadsPerComponent = OutSectionsPerComponent * OutQuadsPerSection;
	const int32 SizeX = OutComponentCount.X * QuadsPerComponent + 1;
	const int32 SizeY = OutComponentCount.Y * QuadsPerComponent + 1;

	TArray<uint16> FinalHeightData;
	FLandscapeImportHelper::TransformHeightmapImportData(ImportData, FinalHeightData, OutImportDescriptor.ImportResolutions[DescriptorIndex], FLandscapeImportResolution(SizeX, SizeY), ELandscapeImportTransformType::ExpandCentered);

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// Weightmap Import/Data Creation

	FString PackagePath = Settings->LayerInfoFolder.Path;
	FString Name;
	bool PathExists = false;

	if(!PackagePath.IsEmpty())
	{
		//Check if path exists. User may have altered it after picking via the widget.
		PathExists = UEditorAssetLibrary::DoesDirectoryExist(PackagePath);
	}

	UE_LOG(LogTemp, Display, TEXT("LandscapeMaterialLayerNames Count: %d"), Settings->LandscapeMaterialLayerNames.Num());
	UE_LOG(LogTemp, Display, TEXT("LayerInfoFolder Path: %s"), *Settings->LayerInfoFolder.Path);

	if (!Settings->LandscapeMaterialLayerNames.IsEmpty() && PathExists && Settings->LandscapeMaterialLayerNames.Num() >= 2 && Settings->WeightmapFileNames.Num() == (Settings->LandscapeMaterialLayerNames.Num() - 1))
	{
		//Checks to see if we have weightmaps to import. If there are 2 or less, we skip this.
		ImportWeightmaps = true;
	}

	if(ImportWeightmaps)
	{
		// Load the AssetToolsModule. This is needed to create layer info objects. However, we may add the option to choose existing info objects instead of always creating new ones as it is not technically needed to have unique info objects.
		FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools"); 
		
		//Create LandscapeLayerInfoObjects for use with weightmaps.
		for(int i = 0; i < Settings->LandscapeMaterialLayerNames.Num(); i++)
		{
			Name = Settings->LandscapeMaterialLayerNames[i].ToString();
			Name = Name.Replace(TEXT(" "), TEXT("")); // Remove whitespaces from Name
			FString NewAssetName;
			FString DummyPackageName;
			AssetToolsModule.Get().CreateUniqueAssetName(PackagePath / Name, TEXT(""), DummyPackageName, NewAssetName);
			UObject* CreatedAsset = AssetToolsModule.Get().CreateAsset(NewAssetName, PackagePath, ULandscapeLayerInfoObject::StaticClass(), nullptr);

			ULandscapeLayerInfoObject* LayerInfoObj = Cast<ULandscapeLayerInfoObject>(CreatedAsset);

			if(LayerInfoObj)
			{
				LayerInfoObj->LayerName = Settings->LandscapeMaterialLayerNames[i];
			}
			LayerInfoObjects.Add(LayerInfoObj);
		}
	
	
		//Set layer names
		for(int i = 0; i < Settings->LandscapeMaterialLayerNames.Num(); i++)
		{
			FLandscapeImportLayerInfo LayerInfo;
			LayerInfo.LayerName = Settings->LandscapeMaterialLayerNames[i];
			MaterialImportLayers.Add(LayerInfo);
			MaterialImportLayers[i].LayerName = LayerInfo.LayerName;
		}
		
		//Fill first Layer with data. Layer 1 should never have areas with no data, as that results in black spots in the final material render.
		MaterialImportLayers[0].LayerData = TArray<uint8>();
		MaterialImportLayers[0].SourceFilePath = ""; // Base layer doesn't contain a file
		MaterialImportLayers[0].LayerInfo = LayerInfoObjects[0];
		const int32 DataSize = SizeX * SizeY;
		MaterialImportLayers[0].LayerData.AddUninitialized(DataSize);
		uint8* ByteData = MaterialImportLayers[0].LayerData.GetData();
		FMemory::Memset(ByteData, 255, DataSize);
		
	
		WeightOutImportDescriptors.AddDefaulted(Settings->LandscapeMaterialLayerNames.Num());
		WeightOutMessage.AddDefaulted(Settings->LandscapeMaterialLayerNames.Num());
		WeightImportResults.AddDefaulted(Settings->LandscapeMaterialLayerNames.Num());

		if(Settings->WeightmapFilePaths.IsEmpty()) // If the user hasn't touched the File Names order, we create the full file paths now.
		{
			for(int i = 0; i < Settings->WeightmapFileNames.Num(); i++) 
			{
				FString FullPath = FPaths::Combine(*Settings->StoredPath, *Settings->WeightmapFileNames[i]);
				UE_LOG(LogTemp, Warning, TEXT("Weightmap Full Path: %s"), *FullPath);
				Settings->WeightmapFilePaths.Add(FullPath); 
			}
		}

		// The first landscape layer is already filled, so the user should always be using 1 weightmap file less than the total amount of landscape layers. 
		for(int32 i = 1; i < Settings->LandscapeMaterialLayerNames.Num(); i++)
		{
			int32 WeightmapIndex = i - 1; 
			if (WeightmapIndex < Settings->WeightmapFilePaths.Num()) 
			{ 
				WeightImportResults[i] = FLandscapeImportHelper::GetWeightmapImportDescriptor(Settings->WeightmapFilePaths[WeightmapIndex], bSingleFile, Settings->FlipYAxis, Settings->LandscapeMaterialLayerNames[i], WeightOutImportDescriptors[i],WeightOutMessage[i]); 
    
				TArray<uint8> WeightOutData; 
				FLandscapeImportHelper::GetWeightmapImportData(WeightOutImportDescriptors[i], DescriptorIndex, Settings->LandscapeMaterialLayerNames[i], WeightOutData, WeightOutMessage[i]); 
    
				TArray<uint8> FinalWeightOutData; 
				FLandscapeImportHelper::TransformWeightmapImportData(WeightOutData, FinalWeightOutData, OutImportDescriptor.ImportResolutions[DescriptorIndex], FLandscapeImportResolution(SizeX, SizeY), ELandscapeImportTransformType::ExpandCentered); 

				MaterialImportLayers[i].LayerName = Settings->LandscapeMaterialLayerNames[i];
				MaterialImportLayers[i].LayerInfo = LayerInfoObjects[i];
				MaterialImportLayers[i].LayerData = MoveTemp(FinalWeightOutData); 
			
			}
		}

		UE_LOG(LogTemp, Warning, TEXT("MaterialImportLayers Length: %d"), MaterialImportLayers.Num());
	}
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// Misc Settings for Landscape Actor Creation
	
	const FVector Offset = FTransform(Settings->Rotation,FVector::ZeroVector, Settings->Scale).TransformVector(FVector(-OutComponentCount.X * QuadsPerComponent / 2., -OutComponentCount.Y * QuadsPerComponent / 2., 0.));
	
	ALandscape* Landscape = World->SpawnActor<ALandscape>(Settings->Location + Offset, Settings->Rotation);
	Landscape->bCanHaveLayersContent = Settings->EnableEditLayers;
	Landscape->LandscapeMaterial = Settings->LandscapeMaterial;
	Landscape->SetActorRelativeScale3D(Settings->Scale);

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Create Gaea Landscape Component

	// This component stores filenames on the actor for any potential reimport. More features will eventually be added to this component.
	UGaeaLandscapeComponent* GaeaComponent = NewObject<UGaeaLandscapeComponent>(Landscape, UGaeaLandscapeComponent::StaticClass(), TEXT("Gaea Landscape Component"));

	if(GaeaComponent)
	{
		GaeaComponent->RegisterComponent(); 
		Landscape->AddInstanceComponent(GaeaComponent); // Must use this so that the component appears in the landscape actor details panel.
		Landscape->AddOwnedComponent(GaeaComponent); // Landscape actor will manage the lifetime of the component.
		
		// Set component height/json paths from our Settings object. We'll use these stored paths for the reimport feature.
		GaeaComponent->HeightmapFilepath.FilePath = Settings->HeightMapFileName;
		GaeaComponent->DefinitionFilepath.FilePath = Settings->jsonFileName;

		// Set the weightmap file paths to the file path array on the component
		if (!Settings->WeightmapFilePaths.IsEmpty())
		{
			GaeaComponent->WeightmapFilepaths.SetNum(Settings->WeightmapFilePaths.Num());
			
			for (int32 i = 0; i < Settings->WeightmapFilePaths.Num(); i++)
			{
				GaeaComponent->WeightmapFilepaths[i].FilePath = Settings->WeightmapFilePaths[i];
			}
		}
		
	}
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// Call Import Function With Height & Weight Data On Landscape Actor
	
	TMap<FGuid, TArray<uint16>> HeightmapDataPerLayers;
	HeightmapDataPerLayers.Add(FGuid(), MoveTemp(FinalHeightData));
	TMap<FGuid, TArray<FLandscapeImportLayerInfo>> MaterialLayerDataPerLayers;

	if(Settings->LandscapeMaterialLayerNames.IsEmpty() || !PathExists || Settings->LandscapeMaterialLayerNames.Num() < 2)
	{
		MaterialLayerDataPerLayers.Add(FGuid(), TArray<FLandscapeImportLayerInfo>());
	}
	else
	{
		MaterialLayerDataPerLayers.Add(FGuid(), MaterialImportLayers);
	}

	// This is the black box function the engine uses to inject all of our height/weight data into our landscape actor.
	Landscape->Import(FGuid::NewGuid(), 0, 0, SizeX - 1, SizeY - 1, OutSectionsPerComponent, OutQuadsPerSection, HeightmapDataPerLayers, *Settings->HeightMapFileName, MaterialLayerDataPerLayers, ELandscapeImportAlphamapType::Additive, TArrayView<const FLandscapeLayer>());
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// Calculate Lighting LOD and Update Final Settings
	
	// automatically calculate a lighting LOD that won't crash lightmass (hopefully)
	// < 2048x2048 -> LOD0
	// >=2048x2048 -> LOD1
	// >= 4096x4096 -> LOD2
	// >= 8192x8192 -> LOD3
	Landscape->StaticLightingLOD = FMath::DivideAndRoundUp(FMath::CeilLogTwo((SizeX * SizeY) / (2048 * 2048) + 1), (uint32)2);
	
	ULandscapeInfo* LandscapeInfo = Landscape->GetLandscapeInfo();
	check(LandscapeInfo);
	LandscapeInfo->UpdateLayerInfoMap(Landscape);

	Landscape->RegisterAllComponents();
	
	for(int32 i = 0; i < Settings->LandscapeMaterialLayerNames.Num(); i++)
	{
		if(MaterialImportLayers[i].LayerInfo != nullptr)
		{
			// New method introduced in 5.5 to create Target Layers. Without this, weightmap import will not work.
			Landscape->AddTargetLayer(MaterialImportLayers[i].LayerName, FLandscapeTargetLayerSettings(MaterialImportLayers[i].LayerInfo, MaterialImportLayers[i].SourceFilePath));
		}
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// World Partition Setup
	
	if (bIsGridBased && Settings->bIsWorldPartition) // This can be considered a partial WP solution, as a significant portion of the needed code is hidden behind the landscape editor mode and private files. This results in slower creation of landscape proxies and no region volume support.
	{
		//Fake scoped task. ChangeGridSize doesn't provide any out data to hook into, so this is really only so the user doesn't think their editor is frozen.
		FScopedSlowTask SlowTask(100.f, FText::FromString(TEXT("Creating landscape chunks, importing bits and bytes. Might be here for awhile.")));
		SlowTask.MakeDialog(false);
		SlowTask.EnterProgressFrame(10.f);
		LandscapeSubsystem->ChangeGridSize(LandscapeInfo, Settings->WorldPartitionGridSize); // WP function call
		SlowTask.EnterProgressFrame(90.f);
	}
	
	ImporterWindowValidator.Pin()->RequestDestroyWindow();
}

TArray<UMaterialExpressionLandscapeLayerBlend*> UGaeaSubsystem::GetLandscapeLayerBlendNodes(UMaterialInterface* MaterialInterface)
{
	TArray<const UMaterialExpressionLandscapeLayerBlend*> ConstAllExpressions;
	TArray<UMaterialExpressionLandscapeLayerBlend*> OutExpressions;
    
	if (MaterialInterface && MaterialInterface->GetBaseMaterial())
	{
		MaterialInterface->GetBaseMaterial()->GetAllExpressionsOfType<UMaterialExpressionLandscapeLayerBlend>(ConstAllExpressions);

		for (const UMaterialExpressionLandscapeLayerBlend* Expression : ConstAllExpressions)
		{
			OutExpressions.Add(const_cast<UMaterialExpressionLandscapeLayerBlend*>(Expression));
		}
	}
	return OutExpressions;
}

TArray<FName> UGaeaSubsystem::GetLandscapeLayerBlendNames(TArray<UMaterialExpressionLandscapeLayerBlend*> LayerBlends, TArray<FName>& Names)
{
	
		TArray<FName> OutNames;

		for (UMaterialExpressionLandscapeLayerBlend* LayerBlend : LayerBlends)
		{
			if (LayerBlend)
			{
				for (const FLayerBlendInput& Layer : LayerBlend->Layers)
				{
					OutNames.AddUnique(Layer.LayerName);
				}
			}
		}
		Names = OutNames;
		return OutNames;
	
}





#undef LOCTEXT_NAMESPACE
