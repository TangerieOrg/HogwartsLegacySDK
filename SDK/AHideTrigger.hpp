#pragma once
#include <cstdint>
#include "ATriggerBox.hpp"
#include "EDynamicObstacleShape.hpp"
#include "FDbSingleColumnInfo.hpp"
class UShapeComponent;
class UOdcObstacleComponent;
class ANavigationDisruptor;
class AActor;
#pragma pack(push, 1)
class AHideTrigger : public ATriggerBox {
public:
    char pad_250[0x8];
    int32_t HideFlags; // 0x258
    int32_t PauseScheduleFlags; // 0x25c
    TArray<FDbSingleColumnInfo> ExcludeNamed; // 0x260
    TArray<FDbSingleColumnInfo> ExcludeNamedCreatures; // 0x270
    TArray<FDbSingleColumnInfo> ExcludeCreatures; // 0x280
    bool bStartActive; // 0x290
    bool bExcludeCompanions; // 0x291
    bool bShutdownExternalNpcs; // 0x292
    char pad_293[0x1];
    EDynamicObstacleShape DynamicObstacleShape; // 0x294
    char pad_295[0x3];
    UShapeComponent* DynamicObstacle; // 0x298
    int32_t NumHideFlags; // 0x2a0
    char pad_2a4[0x4];
    UOdcObstacleComponent* NavObstacle; // 0x2a8
    ANavigationDisruptor* NavigationDisruptor; // 0x2b0
    char pad_2b8[0x148];
    static AHideTrigger* StaticClass();
    void OnEndAggroActorOverlap(AActor* SelfActor, AActor* OtherActor);
    void OnEndActorOverlap(AActor* SelfActor, AActor* OtherActor);
    void OnBeginAggroActorOverlap(AActor* SelfActor, AActor* OtherActor);
    void OnBeginActorOverlap(AActor* SelfActor, AActor* OtherActor);
    void Deactivate(bool bInFromEndPlay);
    void Activate();
}; // Size: 0x400
#pragma pack(pop)
