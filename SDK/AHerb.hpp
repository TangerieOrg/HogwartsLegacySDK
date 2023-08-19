#pragma once
#include <cstdint>
#include "AInteractiveObjectActor.hpp"
class AHerbPlot;
#pragma pack(push, 1)
class AHerb : public AInteractiveObjectActor {
public:
    char pad_298[0x8];
    int64_t RespawnTime; // 0x2a0
    char pad_2a8[0x8];
    int32_t CurrentStage; // 0x2b0
    char pad_2b4[0x1c];
    static AHerb* StaticClass();
    bool TryCreateBeacon();
    void NotifyStageChange(int32_t NewStage, bool bIsInitialState);
    bool IsMultiHarvestable();
    bool IsInPlot();
    bool IsFinalStage(int32_t Stage);
    AHerbPlot* GetPlot();
    static FName GetPlantByproductID(FName PlantID);
    int32_t GetNumStages();
    static bool GetHasInventorySpaceToHarvestPlantOfType(FName PlantID, FName CollectorCharacterID, FName FertilizerID, bool bIsPlanted);
    void FinishHarvestingHerb();
    void BP_NotifyHerbPlanted();
    void BP_NotifyHerbHarvested();
    void BP_NotifyHerbDestroyed();
}; // Size: 0x2d0
#pragma pack(pop)
