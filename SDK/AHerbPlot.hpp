#pragma once
#include <cstdint>
#include "AInteractiveObjectActor.hpp"
#include "EHerbGrowthState.hpp"
class UAkAudioEvent;
class UChildActorComponent;
class UHerbPlotState;
class AHerb;
#pragma pack(push, 1)
class AHerbPlot : public AInteractiveObjectActor {
public:
    char pad_298[0x28];
    UAkAudioEvent* PotionedSFXEvent; // 0x2c0
    UAkAudioEvent* FertilizedSFXEvent; // 0x2c8
    UAkAudioEvent* PlantedSFXEvent; // 0x2d0
    char pad_2d8[0x20];
    AHerbPlot* LeftNeighbor; // 0x2f8
    AHerbPlot* RightNeighbor; // 0x300
    char pad_308[0x8];
    static AHerbPlot* StaticClass();
    static void SetPlotNeighborsFromChildComponents(TArray<UChildActorComponent*>& ChildComponents, bool bLoopNeighbors);
    void PlantSeed(FName PlantID, FName InteractorID);
    void OpenPlotUI();
    void NotifyInitialize();
    void NotifyHerbPlanted();
    void NotifyHerbDestroyed();
    void NotifyHarvested(bool bIsMultiHarvest);
    void NotifyGrowAfterInitialize();
    void NotifyFertilized(bool IsFertilized, FName FertilizerID, bool IsInitialState);
    void NotifyCompleteGrowth();
    void NotifyBeginGrowth();
    bool IsInLineWithNeighbors();
    void HerbPlotBecomeInactiveDelegate__DelegateSignature();
    void HerbPlotBecomeActiveDelegate__DelegateSignature();
    void HarvestHerb(FName CollectorCharacterID);
    UHerbPlotState* GetPlotState();
    AHerb* GetPlantedHerb();
    void ForceState(FName PlantID, FName FertilizerID, EHerbGrowthState GrowthState, float GrowthProgress);
    void ForceGrowthState(EHerbGrowthState GrowthState, float GrowthProgress);
    void EnableCustomCamera();
    void DisableCustomCamera();
    void DestroyHerb();
    void ApplyFertilizer(FName FertilizerID, FName InteractorID);
}; // Size: 0x310
#pragma pack(pop)
