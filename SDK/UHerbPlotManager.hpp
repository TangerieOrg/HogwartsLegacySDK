#pragma once
#include <cstdint>
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ESpawnAllowedResponse.hpp"
#include "FFertilizerEffect.hpp"
#include "FGameplayProperty_Float.hpp"
#include "FPlantDefinition.hpp"
#include "FSeedInfo.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
class UWorld;
class ULevel;
struct FTransform;
class AActor;
class AHerbPlot;
class UObject;
#pragma pack(push, 1)
class UHerbPlotManager : public UPhxDbRegistryTypeManager {
public:
    char pad_a8[0x1a8];
    FGameplayProperty_Float GrowthTimeMultiplier; // 0x250
    char pad_2e0[0x98];
    static UHerbPlotManager* StaticClass();
    AActor* SpawnShell(UWorld* InWorld, FTransform& InSpawnTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool bInIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel);
    AActor* Spawn(UWorld* InWorld, FTransform& InSpawnTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool bInIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel, UObject* InParentContainer);
    void SaveData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID);
    void ResetHarvestPlantCounts();
    void OnSaveGameLoaded();
    void OnNewGame();
    void OnGameToBeSaved();
    static void GetOwnedSeeds(TArray<FSeedInfo>& OwnedSeeds);
    float GetGrowthTimeMultiplier();
    static FFertilizerEffect GetFertilizerEffectStatic(FName FertilizerID);
    TArray<FName> GetAllPlantNames();
    void GetAllHerbologySeeds();
    void GetAllHerbologyByproducts(int32_t AmountToGrant);
    static bool DoesSeedFitInPlot(FSeedInfo& SeedInfo, AHerbPlot* HerbPlot);
    FPlantDefinition BP_GetPlantDefinition(FName PlantID, bool& DefinitionFound);
    static UHerbPlotManager* BP_Get();
    ESpawnAllowedResponse AllowSpawn(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent);
}; // Size: 0x378
#pragma pack(pop)
