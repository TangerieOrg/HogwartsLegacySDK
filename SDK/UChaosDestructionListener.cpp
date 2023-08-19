#include "AChaosSolverActor.hpp"
#include "AGeometryCollectionActor.hpp"
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
#include "UChaosDestructionListener.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UChaosDestructionListener* UChaosDestructionListener::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCollectionEngine.ChaosDestructionListener");
    return (UChaosDestructionListener*)res;
}
void UChaosDestructionListener::SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents"));
    struct Params_SortTrailingEvents {
        TArray<FChaosTrailingEventData> TrailingEvents; // 0x0
        EChaosTrailingSortMethod SortMethod; // 0x10
    }; // Size: 0x11
    Params_SortTrailingEvents params{};
    params.TrailingEvents = (TArray<FChaosTrailingEventData>)TrailingEvents;
    params.SortMethod = (EChaosTrailingSortMethod)SortMethod;
    ProcessEvent(func, &params);
    TrailingEvents = params.TrailingEvents;
}
void UChaosDestructionListener::SetCollisionEventRequestSettings(FChaosCollisionEventRequestSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings"));
    struct Params_SetCollisionEventRequestSettings {
        FChaosCollisionEventRequestSettings InSettings; // 0x0
    }; // Size: 0x18
    Params_SetCollisionEventRequestSettings params{};
    params.InSettings = (FChaosCollisionEventRequestSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
void UChaosDestructionListener::SortRemovalEvents(TArray<FChaosRemovalEventData>& RemovalEvents, EChaosRemovalSortMethod SortMethod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents"));
    struct Params_SortRemovalEvents {
        TArray<FChaosRemovalEventData> RemovalEvents; // 0x0
        EChaosRemovalSortMethod SortMethod; // 0x10
    }; // Size: 0x11
    Params_SortRemovalEvents params{};
    params.RemovalEvents = (TArray<FChaosRemovalEventData>)RemovalEvents;
    params.SortMethod = (EChaosRemovalSortMethod)SortMethod;
    ProcessEvent(func, &params);
    RemovalEvents = params.RemovalEvents;
}
void UChaosDestructionListener::SetTrailingEventRequestSettings(FChaosTrailingEventRequestSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings"));
    struct Params_SetTrailingEventRequestSettings {
        FChaosTrailingEventRequestSettings InSettings; // 0x0
    }; // Size: 0x18
    Params_SetTrailingEventRequestSettings params{};
    params.InSettings = (FChaosTrailingEventRequestSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
void UChaosDestructionListener::SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents"));
    struct Params_SortCollisionEvents {
        TArray<FChaosCollisionEventData> CollisionEvents; // 0x0
        EChaosCollisionSortMethod SortMethod; // 0x10
    }; // Size: 0x11
    Params_SortCollisionEvents params{};
    params.CollisionEvents = (TArray<FChaosCollisionEventData>)CollisionEvents;
    params.SortMethod = (EChaosCollisionSortMethod)SortMethod;
    ProcessEvent(func, &params);
    CollisionEvents = params.CollisionEvents;
}
void UChaosDestructionListener::SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents"));
    struct Params_SortBreakingEvents {
        TArray<FChaosBreakingEventData> BreakingEvents; // 0x0
        EChaosBreakingSortMethod SortMethod; // 0x10
    }; // Size: 0x11
    Params_SortBreakingEvents params{};
    params.BreakingEvents = (TArray<FChaosBreakingEventData>)BreakingEvents;
    params.SortMethod = (EChaosBreakingSortMethod)SortMethod;
    ProcessEvent(func, &params);
    BreakingEvents = params.BreakingEvents;
}
void UChaosDestructionListener::AddGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor"));
    struct Params_AddGeometryCollectionActor {
        AGeometryCollectionActor* GeometryCollectionActor; // 0x0
    }; // Size: 0x8
    Params_AddGeometryCollectionActor params{};
    params.GeometryCollectionActor = (AGeometryCollectionActor*)GeometryCollectionActor;
    ProcessEvent(func, &params);
}
void UChaosDestructionListener::SetTrailingEventEnabled(bool bIsEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled"));
    struct Params_SetTrailingEventEnabled {
        bool bIsEnabled; // 0x0
    }; // Size: 0x1
    Params_SetTrailingEventEnabled params{};
    params.bIsEnabled = (bool)bIsEnabled;
    ProcessEvent(func, &params);
}
void UChaosDestructionListener::SetRemovalEventRequestSettings(FChaosRemovalEventRequestSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings"));
    struct Params_SetRemovalEventRequestSettings {
        FChaosRemovalEventRequestSettings InSettings; // 0x0
    }; // Size: 0x10
    Params_SetRemovalEventRequestSettings params{};
    params.InSettings = (FChaosRemovalEventRequestSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
void UChaosDestructionListener::SetRemovalEventEnabled(bool bIsEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled"));
    struct Params_SetRemovalEventEnabled {
        bool bIsEnabled; // 0x0
    }; // Size: 0x1
    Params_SetRemovalEventEnabled params{};
    params.bIsEnabled = (bool)bIsEnabled;
    ProcessEvent(func, &params);
}
void UChaosDestructionListener::SetCollisionEventEnabled(bool bIsEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled"));
    struct Params_SetCollisionEventEnabled {
        bool bIsEnabled; // 0x0
    }; // Size: 0x1
    Params_SetCollisionEventEnabled params{};
    params.bIsEnabled = (bool)bIsEnabled;
    ProcessEvent(func, &params);
}
void UChaosDestructionListener::SetBreakingEventRequestSettings(FChaosBreakingEventRequestSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings"));
    struct Params_SetBreakingEventRequestSettings {
        FChaosBreakingEventRequestSettings InSettings; // 0x0
    }; // Size: 0x18
    Params_SetBreakingEventRequestSettings params{};
    params.InSettings = (FChaosBreakingEventRequestSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
void UChaosDestructionListener::SetBreakingEventEnabled(bool bIsEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled"));
    struct Params_SetBreakingEventEnabled {
        bool bIsEnabled; // 0x0
    }; // Size: 0x1
    Params_SetBreakingEventEnabled params{};
    params.bIsEnabled = (bool)bIsEnabled;
    ProcessEvent(func, &params);
}
void UChaosDestructionListener::RemoveGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor"));
    struct Params_RemoveGeometryCollectionActor {
        AGeometryCollectionActor* GeometryCollectionActor; // 0x0
    }; // Size: 0x8
    Params_RemoveGeometryCollectionActor params{};
    params.GeometryCollectionActor = (AGeometryCollectionActor*)GeometryCollectionActor;
    ProcessEvent(func, &params);
}
void UChaosDestructionListener::RemoveChaosSolverActor(AChaosSolverActor* ChaosSolverActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor"));
    struct Params_RemoveChaosSolverActor {
        AChaosSolverActor* ChaosSolverActor; // 0x0
    }; // Size: 0x8
    Params_RemoveChaosSolverActor params{};
    params.ChaosSolverActor = (AChaosSolverActor*)ChaosSolverActor;
    ProcessEvent(func, &params);
}
bool UChaosDestructionListener::IsEventListening() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.IsEventListening"));
    struct Params_IsEventListening {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEventListening params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UChaosDestructionListener::AddChaosSolverActor(AChaosSolverActor* ChaosSolverActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor"));
    struct Params_AddChaosSolverActor {
        AChaosSolverActor* ChaosSolverActor; // 0x0
    }; // Size: 0x8
    Params_AddChaosSolverActor params{};
    params.ChaosSolverActor = (AChaosSolverActor*)ChaosSolverActor;
    ProcessEvent(func, &params);
}
