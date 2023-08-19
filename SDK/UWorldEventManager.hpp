#pragma once
#include <cstdint>
#include "EStandardManagedPriority.hpp"
#include "FGameplayTagContainer.hpp"
#include "UObject.hpp"
class UDataTable;
class AWorldEventLocationActor;
struct FWorldEventDataRow;
class ALevelScriptActor;
#pragma pack(push, 1)
class UWorldEventManager : public UObject {
public:
    char pad_28[0x150];
    UDataTable* WorldEventsDataTable; // 0x178
    char pad_180[0x30];
    static UWorldEventManager* StaticClass();
    void StartSettingEventStreamingPausedValue(bool bValue, EStandardManagedPriority Priority, UObject* InInstigator);
    void OnWorldEventLoaded(AWorldEventLocationActor* locationActor, FWorldEventDataRow& dataRow);
    void OnSaveGameLoaded();
    void OnNewGame();
    void OnGameToBeSaved();
    FGameplayTagContainer GetWorldEventLocationTags(ALevelScriptActor* LevelScript);
    static UWorldEventManager* Get();
    void FinishSettingEventStreamingPausedValue(EStandardManagedPriority Priority, UObject* InInstigator);
}; // Size: 0x1b0
#pragma pack(pop)
