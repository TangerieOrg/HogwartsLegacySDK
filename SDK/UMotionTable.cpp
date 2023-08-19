#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UMotionTable.hpp"
float UMotionTable::GetTimeToReachEvent(FName InEventName, FName InStartState, float InCycleTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetTimeToReachEvent"));
    struct Params_GetTimeToReachEvent {
        FName InEventName; // 0x0
        FName InStartState; // 0x8
        float InCycleTime; // 0x10
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetTimeToReachEvent params{};
    params.InEventName = (FName)InEventName;
    params.InStartState = (FName)InStartState;
    params.InCycleTime = (float)InCycleTime;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UMotionTable* UMotionTable::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.MotionTable");
    return (UMotionTable*)res;
}
bool UMotionTable::HasEventTransition(FName InEventName, FName InStartState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.HasEventTransition"));
    struct Params_HasEventTransition {
        FName InEventName; // 0x0
        FName InStartState; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_HasEventTransition params{};
    params.InEventName = (FName)InEventName;
    params.InStartState = (FName)InStartState;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMotionTable::HasStateTransition(FName InStartState, FName InEndState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.HasStateTransition"));
    struct Params_HasStateTransition {
        FName InStartState; // 0x0
        FName InEndState; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_HasStateTransition params{};
    params.InStartState = (FName)InStartState;
    params.InEndState = (FName)InEndState;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UMotionTable::GetVariationStateNameFromAnimation(FString InAnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetVariationStateNameFromAnimation"));
    struct Params_GetVariationStateNameFromAnimation {
        FString InAnimationName; // 0x0
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetVariationStateNameFromAnimation params{};
    params.InAnimationName = (FString)InAnimationName;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
float UMotionTable::GetTravelDistanceToState(float InTimeToReachState, FName InEndState, FName InStartState, float InCycleTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetTravelDistanceToState"));
    struct Params_GetTravelDistanceToState {
        float InTimeToReachState; // 0x0
        FName InEndState; // 0x4
        FName InStartState; // 0xc
        float InCycleTime; // 0x14
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetTravelDistanceToState params{};
    params.InTimeToReachState = (float)InTimeToReachState;
    params.InEndState = (FName)InEndState;
    params.InStartState = (FName)InStartState;
    params.InCycleTime = (float)InCycleTime;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMotionTable::GetTravelDistanceToEvent(float InTimeToReachEvent, FName InEventName, FName InStartState, float InCycleTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetTravelDistanceToEvent"));
    struct Params_GetTravelDistanceToEvent {
        float InTimeToReachEvent; // 0x0
        FName InEventName; // 0x4
        FName InStartState; // 0xc
        float InCycleTime; // 0x14
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetTravelDistanceToEvent params{};
    params.InTimeToReachEvent = (float)InTimeToReachEvent;
    params.InEventName = (FName)InEventName;
    params.InStartState = (FName)InStartState;
    params.InCycleTime = (float)InCycleTime;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMotionTable::GetTimeToReachEventBefore(float InTimeToReachEvent, FName InEventName, FName InStartState, float InCycleTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetTimeToReachEventBefore"));
    struct Params_GetTimeToReachEventBefore {
        float InTimeToReachEvent; // 0x0
        FName InEventName; // 0x4
        FName InStartState; // 0xc
        float InCycleTime; // 0x14
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetTimeToReachEventBefore params{};
    params.InTimeToReachEvent = (float)InTimeToReachEvent;
    params.InEventName = (FName)InEventName;
    params.InStartState = (FName)InStartState;
    params.InCycleTime = (float)InCycleTime;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FName UMotionTable::GetStateContainingEvent(FName InEventName, FName InStartState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetStateContainingEvent"));
    struct Params_GetStateContainingEvent {
        FName InEventName; // 0x0
        FName InStartState; // 0x8
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetStateContainingEvent params{};
    params.InEventName = (FName)InEventName;
    params.InStartState = (FName)InStartState;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
float UMotionTable::GetTimeToReachEndStateBefore(float InTimeToReachEndState, FName InEndState, FName InStartState, float InCycleTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetTimeToReachEndStateBefore"));
    struct Params_GetTimeToReachEndStateBefore {
        float InTimeToReachEndState; // 0x0
        FName InEndState; // 0x4
        FName InStartState; // 0xc
        float InCycleTime; // 0x14
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetTimeToReachEndStateBefore params{};
    params.InTimeToReachEndState = (float)InTimeToReachEndState;
    params.InEndState = (FName)InEndState;
    params.InStartState = (FName)InStartState;
    params.InCycleTime = (float)InCycleTime;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMotionTable::GetTimeToReachEndState(FName InEndState, FName InStartState, float InCycleTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetTimeToReachEndState"));
    struct Params_GetTimeToReachEndState {
        FName InEndState; // 0x0
        FName InStartState; // 0x8
        float InCycleTime; // 0x10
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetTimeToReachEndState params{};
    params.InEndState = (FName)InEndState;
    params.InStartState = (FName)InStartState;
    params.InCycleTime = (float)InCycleTime;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMotionTable::GetStateTransitionTravelDistance(FName InStartState, FName InEndState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetStateTransitionTravelDistance"));
    struct Params_GetStateTransitionTravelDistance {
        FName InStartState; // 0x0
        FName InEndState; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetStateTransitionTravelDistance params{};
    params.InStartState = (FName)InStartState;
    params.InEndState = (FName)InEndState;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMotionTable::GetStateTransitionDuration(FName InStartState, FName InEndState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetStateTransitionDuration"));
    struct Params_GetStateTransitionDuration {
        FName InStartState; // 0x0
        FName InEndState; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetStateTransitionDuration params{};
    params.InStartState = (FName)InStartState;
    params.InEndState = (FName)InEndState;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FName UMotionTable::GetStateNameFromAlias(FString InAliasedStateName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetStateNameFromAlias"));
    struct Params_GetStateNameFromAlias {
        FString InAliasedStateName; // 0x0
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetStateNameFromAlias params{};
    params.InAliasedStateName = (FString)InAliasedStateName;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
float UMotionTable::GetNearestTimeToReachEvent(float InTimeToReachEvent, FName InEventName, FName InStartState, float InCycleTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetNearestTimeToReachEvent"));
    struct Params_GetNearestTimeToReachEvent {
        float InTimeToReachEvent; // 0x0
        FName InEventName; // 0x4
        FName InStartState; // 0xc
        float InCycleTime; // 0x14
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetNearestTimeToReachEvent params{};
    params.InTimeToReachEvent = (float)InTimeToReachEvent;
    params.InEventName = (FName)InEventName;
    params.InStartState = (FName)InStartState;
    params.InCycleTime = (float)InCycleTime;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMotionTable::GetNearestTimeToReachEndState(float InTimeToReachEndState, FName InEndState, FName InStartState, float InCycleTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetNearestTimeToReachEndState"));
    struct Params_GetNearestTimeToReachEndState {
        float InTimeToReachEndState; // 0x0
        FName InEndState; // 0x4
        FName InStartState; // 0xc
        float InCycleTime; // 0x14
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetNearestTimeToReachEndState params{};
    params.InTimeToReachEndState = (float)InTimeToReachEndState;
    params.InEndState = (FName)InEndState;
    params.InStartState = (FName)InStartState;
    params.InCycleTime = (float)InCycleTime;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMotionTable::GetEventTransitionTravelDistance(FName InEventName, FName InStartState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetEventTransitionTravelDistance"));
    struct Params_GetEventTransitionTravelDistance {
        FName InEventName; // 0x0
        FName InStartState; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetEventTransitionTravelDistance params{};
    params.InEventName = (FName)InEventName;
    params.InStartState = (FName)InStartState;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMotionTable::GetEventFollowThroughTravelDistance(FName InEventName, FName InStartState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetEventFollowThroughTravelDistance"));
    struct Params_GetEventFollowThroughTravelDistance {
        FName InEventName; // 0x0
        FName InStartState; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetEventFollowThroughTravelDistance params{};
    params.InEventName = (FName)InEventName;
    params.InStartState = (FName)InStartState;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMotionTable::GetEventFollowThroughDuration(FName InEventName, FName InStartState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetEventFollowThroughDuration"));
    struct Params_GetEventFollowThroughDuration {
        FName InEventName; // 0x0
        FName InStartState; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetEventFollowThroughDuration params{};
    params.InEventName = (FName)InEventName;
    params.InStartState = (FName)InStartState;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMotionTable::GetEventCycleTime(FName InEventName, FName InStartState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.GetEventCycleTime"));
    struct Params_GetEventCycleTime {
        FName InEventName; // 0x0
        FName InStartState; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetEventCycleTime params{};
    params.InEventName = (FName)InEventName;
    params.InStartState = (FName)InStartState;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UMotionTable::AliasHasVariations(FString InAliasedStateName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionTable.AliasHasVariations"));
    struct Params_AliasHasVariations {
        FString InAliasedStateName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_AliasHasVariations params{};
    params.InAliasedStateName = (FString)InAliasedStateName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
