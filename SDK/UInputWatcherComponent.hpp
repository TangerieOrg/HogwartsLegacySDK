#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UInputComponent.hpp"
class UBaseWatcher;
class UStickFlickWatcherRecord;
class UGameLogicObject;
class UWatcherRecord;
class AActor;
#pragma pack(push, 1)
class UInputWatcherComponent : public UInputComponent {
public:
    TArray<UBaseWatcher*> Watchers; // 0x150
    char pad_160[0x78];
    TArray<UBaseWatcher*> UpdateWatcherList; // 0x1d8
    UGameLogicObject* GameLogicObject; // 0x1e8
    static UInputWatcherComponent* StaticClass();
    UGameLogicObject* GetGameLogicObject();
    static FVector2D GetFlickDirection(AActor* Owner, UStickFlickWatcherRecord* StickFlickWatcherRecord);
    static void FlushQueuedActionsOnOwner(AActor* Owner, UWatcherRecord* InWatcherRecord);
    void FlushQueuedActions(UWatcherRecord* InWatcherRecord);
}; // Size: 0x1f0
#pragma pack(pop)
