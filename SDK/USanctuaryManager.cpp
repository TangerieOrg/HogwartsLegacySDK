#include "AActor.hpp"
#include "ASanctuaryItemGenerator.hpp"
#include "ESanctuaryIdentity.hpp"
#include "FGameplayProperty_Float.hpp"
#include "FSanctuaryExpansionDefinition.hpp"
#include "FTimeEvent.hpp"
#include "FTimespan.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USanctuaryExpansionManager.hpp"
#include "USanctuaryManager.hpp"
float USanctuaryManager::GetSanctuaryItemGeneratorProgress(ASanctuaryItemGenerator* ItemGenerator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.GetSanctuaryItemGeneratorProgress"));
    struct Params_GetSanctuaryItemGeneratorProgress {
        ASanctuaryItemGenerator* ItemGenerator; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetSanctuaryItemGeneratorProgress params{};
    params.ItemGenerator = (ASanctuaryItemGenerator*)ItemGenerator;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
USanctuaryManager* USanctuaryManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryManager");
    return (USanctuaryManager*)res;
}
FName USanctuaryManager::GetBiomeIDFromLevel(FString LevelPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.GetBiomeIDFromLevel"));
    struct Params_GetBiomeIDFromLevel {
        FString LevelPath; // 0x0
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetBiomeIDFromLevel params{};
    params.LevelPath = (FString)LevelPath;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void USanctuaryManager::SetInitialSanctuaryCustomizationChoice(UObject* WorldContextObject, FString InChoice) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.SetInitialSanctuaryCustomizationChoice"));
    struct Params_SetInitialSanctuaryCustomizationChoice {
        UObject* WorldContextObject; // 0x0
        FString InChoice; // 0x8
    }; // Size: 0x18
    Params_SetInitialSanctuaryCustomizationChoice params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InChoice = (FString)InChoice;
    ProcessEvent(func, &params);
}
TArray<FSanctuaryExpansionDefinition> USanctuaryManager::GetSanctuaryExpansions(FName AreaID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.GetSanctuaryExpansions"));
    struct Params_GetSanctuaryExpansions {
        FName AreaID; // 0x0
        TArray<FSanctuaryExpansionDefinition> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetSanctuaryExpansions params{};
    params.AreaID = (FName)AreaID;
    ProcessEvent(func, &params);
    return (TArray<FSanctuaryExpansionDefinition>)params.ReturnValue;
}
void USanctuaryManager::SetCustomNameForChest(int32_t ObjectUID, FString NewName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.SetCustomNameForChest"));
    struct Params_SetCustomNameForChest {
        int32_t ObjectUID; // 0x0
        char pad_4[0x4];
        FString NewName; // 0x8
    }; // Size: 0x18
    Params_SetCustomNameForChest params{};
    params.ObjectUID = (int32_t)ObjectUID;
    params.NewName = (FString)NewName;
    ProcessEvent(func, &params);
}
FName USanctuaryManager::GetNurturingSpaceIDFromBiomeLevel(FString LevelPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.GetNurturingSpaceIDFromBiomeLevel"));
    struct Params_GetNurturingSpaceIDFromBiomeLevel {
        FString LevelPath; // 0x0
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetNurturingSpaceIDFromBiomeLevel params{};
    params.LevelPath = (FString)LevelPath;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void USanctuaryManager::RemoveCreatureToyFromBiome(AActor* ToyActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.RemoveCreatureToyFromBiome"));
    struct Params_RemoveCreatureToyFromBiome {
        AActor* ToyActor; // 0x0
    }; // Size: 0x8
    Params_RemoveCreatureToyFromBiome params{};
    params.ToyActor = (AActor*)ToyActor;
    ProcessEvent(func, &params);
}
void USanctuaryManager::OnStartNewInterval(FTimeEvent& InTimeEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.OnStartNewInterval"));
    struct Params_OnStartNewInterval {
        FTimeEvent InTimeEvent; // 0x0
    }; // Size: 0x30
    Params_OnStartNewInterval params{};
    params.InTimeEvent = (FTimeEvent)InTimeEvent;
    ProcessEvent(func, &params);
    InTimeEvent = params.InTimeEvent;
}
FName USanctuaryManager::GetSanctuaryItemGeneratorGuaranteedOutputItem(ASanctuaryItemGenerator* ItemGenerator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.GetSanctuaryItemGeneratorGuaranteedOutputItem"));
    struct Params_GetSanctuaryItemGeneratorGuaranteedOutputItem {
        ASanctuaryItemGenerator* ItemGenerator; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSanctuaryItemGeneratorGuaranteedOutputItem params{};
    params.ItemGenerator = (ASanctuaryItemGenerator*)ItemGenerator;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void USanctuaryManager::OnToyChestEndPlay(AActor* ToyChestActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.OnToyChestEndPlay"));
    struct Params_OnToyChestEndPlay {
        AActor* ToyChestActor; // 0x0
    }; // Size: 0x8
    Params_OnToyChestEndPlay params{};
    params.ToyChestActor = (AActor*)ToyChestActor;
    ProcessEvent(func, &params);
}
void USanctuaryManager::OnToyChestBeginPlay(AActor* ToyChestActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.OnToyChestBeginPlay"));
    struct Params_OnToyChestBeginPlay {
        AActor* ToyChestActor; // 0x0
    }; // Size: 0x8
    Params_OnToyChestBeginPlay params{};
    params.ToyChestActor = (AActor*)ToyChestActor;
    ProcessEvent(func, &params);
}
void USanctuaryManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void USanctuaryManager::OnSanctuaryItemGeneratorFinished(FTimeEvent& InTimeEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.OnSanctuaryItemGeneratorFinished"));
    struct Params_OnSanctuaryItemGeneratorFinished {
        FTimeEvent InTimeEvent; // 0x0
    }; // Size: 0x30
    Params_OnSanctuaryItemGeneratorFinished params{};
    params.InTimeEvent = (FTimeEvent)InTimeEvent;
    ProcessEvent(func, &params);
    InTimeEvent = params.InTimeEvent;
}
void USanctuaryManager::OnNewGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.OnNewGame"));
    struct Params_OnNewGame {
    }; // Size: 0x0
    Params_OnNewGame params{};
    ProcessEvent(func, &params);
}
FTimespan USanctuaryManager::GetSanctuaryItemGeneratorTimeRemaining(ASanctuaryItemGenerator* ItemGenerator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.GetSanctuaryItemGeneratorTimeRemaining"));
    struct Params_GetSanctuaryItemGeneratorTimeRemaining {
        ASanctuaryItemGenerator* ItemGenerator; // 0x0
        FTimespan ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSanctuaryItemGeneratorTimeRemaining params{};
    params.ItemGenerator = (ASanctuaryItemGenerator*)ItemGenerator;
    ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
void USanctuaryManager::GetSanctuaryItemGeneratorItemHeld(ASanctuaryItemGenerator* ItemGenerator, FName& OutItemHeld, int32_t& OutQuantity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.GetSanctuaryItemGeneratorItemHeld"));
    struct Params_GetSanctuaryItemGeneratorItemHeld {
        ASanctuaryItemGenerator* ItemGenerator; // 0x0
        FName OutItemHeld; // 0x8
        int32_t OutQuantity; // 0x10
    }; // Size: 0x14
    Params_GetSanctuaryItemGeneratorItemHeld params{};
    params.ItemGenerator = (ASanctuaryItemGenerator*)ItemGenerator;
    params.OutItemHeld = (FName)OutItemHeld;
    params.OutQuantity = (int32_t)OutQuantity;
    ProcessEvent(func, &params);
    OutItemHeld = params.OutItemHeld;
    OutQuantity = params.OutQuantity;
}
FName USanctuaryManager::GetNurturingSpaceIDFromBiomeID(FName BiomeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.GetNurturingSpaceIDFromBiomeID"));
    struct Params_GetNurturingSpaceIDFromBiomeID {
        FName BiomeID; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetNurturingSpaceIDFromBiomeID params{};
    params.BiomeID = (FName)BiomeID;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void USanctuaryManager::GetNurtureSpacesContainingCreatures(bool bIncludeInventory, bool bIncludeSanctuaryBiomes, bool bIncludeOther) {}
USanctuaryManager* USanctuaryManager::Get(bool bCreateIfNull) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.Get"));
    struct Params_Get {
        bool bCreateIfNull; // 0x0
        char pad_1[0x7];
        USanctuaryManager* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Get params{};
    params.bCreateIfNull = (bool)bCreateIfNull;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (USanctuaryManager*)params.ReturnValue;
}
ESanctuaryIdentity USanctuaryManager::GetInitialSanctuaryLightingIdentity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.GetInitialSanctuaryLightingIdentity"));
    struct Params_GetInitialSanctuaryLightingIdentity {
        ESanctuaryIdentity ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetInitialSanctuaryLightingIdentity params{};
    ProcessEvent(func, &params);
    return (ESanctuaryIdentity)params.ReturnValue;
}
USanctuaryExpansionManager* USanctuaryManager::GetExpansionManager() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.GetExpansionManager"));
    struct Params_GetExpansionManager {
        USanctuaryExpansionManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetExpansionManager params{};
    ProcessEvent(func, &params);
    return (USanctuaryExpansionManager*)params.ReturnValue;
}
FString USanctuaryManager::GetCustomNameForChest(int32_t ObjectUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.GetCustomNameForChest"));
    struct Params_GetCustomNameForChest {
        int32_t ObjectUID; // 0x0
        char pad_4[0x4];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetCustomNameForChest params{};
    params.ObjectUID = (int32_t)ObjectUID;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FName USanctuaryManager::GetBiomeIDFromNurturingSpaceID(FName NurturingSpaceID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.GetBiomeIDFromNurturingSpaceID"));
    struct Params_GetBiomeIDFromNurturingSpaceID {
        FName NurturingSpaceID; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetBiomeIDFromNurturingSpaceID params{};
    params.NurturingSpaceID = (FName)NurturingSpaceID;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void USanctuaryManager::AddCreatureToyToBiome(AActor* ToyActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryManager.AddCreatureToyToBiome"));
    struct Params_AddCreatureToyToBiome {
        AActor* ToyActor; // 0x0
    }; // Size: 0x8
    Params_AddCreatureToyToBiome params{};
    params.ToyActor = (AActor*)ToyActor;
    ProcessEvent(func, &params);
}
