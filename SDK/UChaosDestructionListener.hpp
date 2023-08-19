#pragma once
#include <cstdint>
#include "EChaosBreakingSortMethod.hpp"
#include "EChaosCollisionSortMethod.hpp"
#include "EChaosRemovalSortMethod.hpp"
#include "EChaosTrailingSortMethod.hpp"
#include "FChaosBreakingEventData.hpp"
#include "FChaosBreakingEventRequestSettings.hpp"
#include "FChaosCollisionEventData.hpp"
#include "FChaosCollisionEventRequestSettings.hpp"
#include "FChaosRemovalEventData.hpp"
#include "FChaosRemovalEventRequestSettings.hpp"
#include "FChaosTrailingEventData.hpp"
#include "FChaosTrailingEventRequestSettings.hpp"
#include "USceneComponent.hpp"
class AChaosSolverActor;
class AGeometryCollectionActor;
#pragma pack(push, 1)
class UChaosDestructionListener : public USceneComponent {
public:
    char pad_220[0x14];
    FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x234
    FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x24c
    FChaosRemovalEventRequestSettings RemovalEventRequestSettings; // 0x264
    char pad_274[0x21c];
    static UChaosDestructionListener* StaticClass();
    void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);
    void SortRemovalEvents(TArray<FChaosRemovalEventData>& RemovalEvents, EChaosRemovalSortMethod SortMethod);
    void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);
    void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);
    void SetTrailingEventRequestSettings(FChaosTrailingEventRequestSettings& InSettings);
    void SetTrailingEventEnabled(bool bIsEnabled);
    void SetRemovalEventRequestSettings(FChaosRemovalEventRequestSettings& InSettings);
    void SetRemovalEventEnabled(bool bIsEnabled);
    void SetCollisionEventRequestSettings(FChaosCollisionEventRequestSettings& InSettings);
    void SetCollisionEventEnabled(bool bIsEnabled);
    void SetBreakingEventRequestSettings(FChaosBreakingEventRequestSettings& InSettings);
    void SetBreakingEventEnabled(bool bIsEnabled);
    void RemoveGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor);
    void RemoveChaosSolverActor(AChaosSolverActor* ChaosSolverActor);
    bool IsEventListening();
    void AddGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor);
    void AddChaosSolverActor(AChaosSolverActor* ChaosSolverActor);
}; // Size: 0x490
#pragma pack(pop)
