#include "ALevelScriptActor.hpp"
#include "AWorldEventLocationActor.hpp"
#include "EStandardManagedPriority.hpp"
#include "FGameplayTagContainer.hpp"
#include "FWorldEventDataRow.hpp"
#include "UDataTable.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UWorldEventManager.hpp"
UWorldEventManager* UWorldEventManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventManager");
    return (UWorldEventManager*)res;
}
void UWorldEventManager::StartSettingEventStreamingPausedValue(bool bValue, EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventManager.StartSettingEventStreamingPausedValue"));
    struct Params_StartSettingEventStreamingPausedValue {
        bool bValue; // 0x0
        EStandardManagedPriority Priority; // 0x1
        char pad_2[0x6];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_StartSettingEventStreamingPausedValue params{};
    params.bValue = (bool)bValue;
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
UWorldEventManager* UWorldEventManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventManager.Get"));
    struct Params_Get {
        UWorldEventManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UWorldEventManager*)params.ReturnValue;
}
void UWorldEventManager::OnWorldEventLoaded(AWorldEventLocationActor* locationActor, FWorldEventDataRow& dataRow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventManager.OnWorldEventLoaded"));
    struct Params_OnWorldEventLoaded {
        AWorldEventLocationActor* locationActor; // 0x0
        FWorldEventDataRow dataRow; // 0x8
    }; // Size: 0x110
    Params_OnWorldEventLoaded params{};
    params.locationActor = (AWorldEventLocationActor*)locationActor;
    params.dataRow = (FWorldEventDataRow)dataRow;
    ProcessEvent(func, &params);
    dataRow = params.dataRow;
}
void UWorldEventManager::OnNewGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventManager.OnNewGame"));
    struct Params_OnNewGame {
    }; // Size: 0x0
    Params_OnNewGame params{};
    ProcessEvent(func, &params);
}
void UWorldEventManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
FGameplayTagContainer UWorldEventManager::GetWorldEventLocationTags(ALevelScriptActor* LevelScript) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventManager.GetWorldEventLocationTags"));
    struct Params_GetWorldEventLocationTags {
        ALevelScriptActor* LevelScript; // 0x0
        FGameplayTagContainer ReturnValue; // 0x8
    }; // Size: 0x28
    Params_GetWorldEventLocationTags params{};
    params.LevelScript = (ALevelScriptActor*)LevelScript;
    ProcessEvent(func, &params);
    return (FGameplayTagContainer)params.ReturnValue;
}
void UWorldEventManager::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventManager.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
void UWorldEventManager::FinishSettingEventStreamingPausedValue(EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventManager.FinishSettingEventStreamingPausedValue"));
    struct Params_FinishSettingEventStreamingPausedValue {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_FinishSettingEventStreamingPausedValue params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
