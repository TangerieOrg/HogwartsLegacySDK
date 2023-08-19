#include "AActor.hpp"
#include "AHerbPlot.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ESpawnAllowedResponse.hpp"
#include "FFertilizerEffect.hpp"
#include "FGameplayProperty_Float.hpp"
#include "FPlantDefinition.hpp"
#include "FSeedInfo.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
#include "UHerbPlotManager.hpp"
#include "ULevel.hpp"
#include "UObject.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
#include "UWorld.hpp"
UHerbPlotManager* UHerbPlotManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HerbPlotManager");
    return (UHerbPlotManager*)res;
}
void UHerbPlotManager::ResetHarvestPlantCounts() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.ResetHarvestPlantCounts"));
    struct Params_ResetHarvestPlantCounts {
    }; // Size: 0x0
    Params_ResetHarvestPlantCounts params{};
    ProcessEvent(func, &params);
}
AActor* UHerbPlotManager::SpawnShell(UWorld* InWorld, FTransform& InSpawnTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool bInIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.SpawnShell"));
    struct Params_SpawnShell {
        UWorld* InWorld; // 0x0
        char pad_8[0x8];
        FTransform InSpawnTransform; // 0x10
        FString InRegistryID; // 0x40
        uint32_t inParentUID; // 0x50
        uint32_t inOverrideUID; // 0x54
        bool bInIsPersistent; // 0x58
        ESpawnActorCollisionHandlingMethod InCollisionMethod; // 0x59
        char pad_5a[0x6];
        ULevel* InOverrideLevel; // 0x60
        AActor* ReturnValue; // 0x68
    }; // Size: 0x70
    Params_SpawnShell params{};
    params.InWorld = (UWorld*)InWorld;
    params.InSpawnTransform = (FTransform)InSpawnTransform;
    params.InRegistryID = (FString)InRegistryID;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    params.bInIsPersistent = (bool)bInIsPersistent;
    params.InCollisionMethod = (ESpawnActorCollisionHandlingMethod)InCollisionMethod;
    params.InOverrideLevel = (ULevel*)InOverrideLevel;
    ProcessEvent(func, &params);
    InSpawnTransform = params.InSpawnTransform;
    return (AActor*)params.ReturnValue;
}
AActor* UHerbPlotManager::Spawn(UWorld* InWorld, FTransform& InSpawnTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool bInIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel, UObject* InParentContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.Spawn"));
    struct Params_Spawn {
        UWorld* InWorld; // 0x0
        char pad_8[0x8];
        FTransform InSpawnTransform; // 0x10
        FString InRegistryID; // 0x40
        uint32_t inParentUID; // 0x50
        uint32_t inOverrideUID; // 0x54
        bool bInIsPersistent; // 0x58
        ESpawnActorCollisionHandlingMethod InCollisionMethod; // 0x59
        char pad_5a[0x6];
        ULevel* InOverrideLevel; // 0x60
        UObject* InParentContainer; // 0x68
        AActor* ReturnValue; // 0x70
    }; // Size: 0x78
    Params_Spawn params{};
    params.InWorld = (UWorld*)InWorld;
    params.InSpawnTransform = (FTransform)InSpawnTransform;
    params.InRegistryID = (FString)InRegistryID;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    params.bInIsPersistent = (bool)bInIsPersistent;
    params.InCollisionMethod = (ESpawnActorCollisionHandlingMethod)InCollisionMethod;
    params.InOverrideLevel = (ULevel*)InOverrideLevel;
    params.InParentContainer = (UObject*)InParentContainer;
    ProcessEvent(func, &params);
    InSpawnTransform = params.InSpawnTransform;
    return (AActor*)params.ReturnValue;
}
void UHerbPlotManager::OnNewGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.OnNewGame"));
    struct Params_OnNewGame {
    }; // Size: 0x0
    Params_OnNewGame params{};
    ProcessEvent(func, &params);
}
void UHerbPlotManager::SaveData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.SaveData"));
    struct Params_SaveData {
        FString InItemID; // 0x0
        AActor* TargetActor; // 0x10
        uint32_t inParentUID; // 0x18
        uint32_t inOverrideUID; // 0x1c
    }; // Size: 0x20
    Params_SaveData params{};
    params.InItemID = (FString)InItemID;
    params.TargetActor = (AActor*)TargetActor;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    ProcessEvent(func, &params);
}
void UHerbPlotManager::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
void UHerbPlotManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
ESpawnAllowedResponse UHerbPlotManager::AllowSpawn(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.AllowSpawn"));
    struct Params_AllowSpawn {
        FString InItemID; // 0x0
        uint32_t inParentUID; // 0x10
        uint32_t inOverrideUID; // 0x14
        bool inIsPersistent; // 0x18
        ESpawnAllowedResponse ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_AllowSpawn params{};
    params.InItemID = (FString)InItemID;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    params.inIsPersistent = (bool)inIsPersistent;
    ProcessEvent(func, &params);
    return (ESpawnAllowedResponse)params.ReturnValue;
}
void UHerbPlotManager::GetOwnedSeeds(TArray<FSeedInfo>& OwnedSeeds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.GetOwnedSeeds"));
    struct Params_GetOwnedSeeds {
        TArray<FSeedInfo> OwnedSeeds; // 0x0
    }; // Size: 0x10
    Params_GetOwnedSeeds params{};
    params.OwnedSeeds = (TArray<FSeedInfo>)OwnedSeeds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OwnedSeeds = params.OwnedSeeds;
}
float UHerbPlotManager::GetGrowthTimeMultiplier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.GetGrowthTimeMultiplier"));
    struct Params_GetGrowthTimeMultiplier {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetGrowthTimeMultiplier params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FFertilizerEffect UHerbPlotManager::GetFertilizerEffectStatic(FName FertilizerID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.GetFertilizerEffectStatic"));
    struct Params_GetFertilizerEffectStatic {
        FName FertilizerID; // 0x0
        FFertilizerEffect ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetFertilizerEffectStatic params{};
    params.FertilizerID = (FName)FertilizerID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FFertilizerEffect)params.ReturnValue;
}
TArray<FName> UHerbPlotManager::GetAllPlantNames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.GetAllPlantNames"));
    struct Params_GetAllPlantNames {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllPlantNames params{};
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
void UHerbPlotManager::GetAllHerbologySeeds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.GetAllHerbologySeeds"));
    struct Params_GetAllHerbologySeeds {
    }; // Size: 0x0
    Params_GetAllHerbologySeeds params{};
    ProcessEvent(func, &params);
}
void UHerbPlotManager::GetAllHerbologyByproducts(int32_t AmountToGrant) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.GetAllHerbologyByproducts"));
    struct Params_GetAllHerbologyByproducts {
        int32_t AmountToGrant; // 0x0
    }; // Size: 0x4
    Params_GetAllHerbologyByproducts params{};
    params.AmountToGrant = (int32_t)AmountToGrant;
    ProcessEvent(func, &params);
}
bool UHerbPlotManager::DoesSeedFitInPlot(FSeedInfo& SeedInfo, AHerbPlot* HerbPlot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.DoesSeedFitInPlot"));
    struct Params_DoesSeedFitInPlot {
        FSeedInfo SeedInfo; // 0x0
        AHerbPlot* HerbPlot; // 0x30
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_DoesSeedFitInPlot params{};
    params.SeedInfo = (FSeedInfo)SeedInfo;
    params.HerbPlot = (AHerbPlot*)HerbPlot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SeedInfo = params.SeedInfo;
    return (bool)params.ReturnValue;
}
FPlantDefinition UHerbPlotManager::BP_GetPlantDefinition(FName PlantID, bool& DefinitionFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.BP_GetPlantDefinition"));
    struct Params_BP_GetPlantDefinition {
        FName PlantID; // 0x0
        bool DefinitionFound; // 0x8
        char pad_9[0x3];
        FPlantDefinition ReturnValue; // 0xc
    }; // Size: 0x50
    Params_BP_GetPlantDefinition params{};
    params.PlantID = (FName)PlantID;
    params.DefinitionFound = (bool)DefinitionFound;
    ProcessEvent(func, &params);
    DefinitionFound = params.DefinitionFound;
    return (FPlantDefinition)params.ReturnValue;
}
UHerbPlotManager* UHerbPlotManager::BP_Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotManager.BP_Get"));
    struct Params_BP_Get {
        UHerbPlotManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_BP_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UHerbPlotManager*)params.ReturnValue;
}
