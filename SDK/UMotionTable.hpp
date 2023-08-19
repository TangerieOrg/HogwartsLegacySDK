#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UMotionTable : public UDataAsset {
public:
    char pad_30[0x190];
    static UMotionTable* StaticClass();
    bool HasStateTransition(FName InStartState, FName InEndState);
    bool HasEventTransition(FName InEventName, FName InStartState);
    FName GetVariationStateNameFromAnimation(FString InAnimationName);
    float GetTravelDistanceToState(float InTimeToReachState, FName InEndState, FName InStartState, float InCycleTime);
    float GetTravelDistanceToEvent(float InTimeToReachEvent, FName InEventName, FName InStartState, float InCycleTime);
    float GetTimeToReachEventBefore(float InTimeToReachEvent, FName InEventName, FName InStartState, float InCycleTime);
    float GetTimeToReachEvent(FName InEventName, FName InStartState, float InCycleTime);
    float GetTimeToReachEndStateBefore(float InTimeToReachEndState, FName InEndState, FName InStartState, float InCycleTime);
    float GetTimeToReachEndState(FName InEndState, FName InStartState, float InCycleTime);
    float GetStateTransitionTravelDistance(FName InStartState, FName InEndState);
    float GetStateTransitionDuration(FName InStartState, FName InEndState);
    FName GetStateNameFromAlias(FString InAliasedStateName);
    FName GetStateContainingEvent(FName InEventName, FName InStartState);
    float GetNearestTimeToReachEvent(float InTimeToReachEvent, FName InEventName, FName InStartState, float InCycleTime);
    float GetNearestTimeToReachEndState(float InTimeToReachEndState, FName InEndState, FName InStartState, float InCycleTime);
    float GetEventTransitionTravelDistance(FName InEventName, FName InStartState);
    float GetEventFollowThroughTravelDistance(FName InEventName, FName InStartState);
    float GetEventFollowThroughDuration(FName InEventName, FName InStartState);
    float GetEventCycleTime(FName InEventName, FName InStartState);
    bool AliasHasVariations(FString InAliasedStateName);
}; // Size: 0x1c0
#pragma pack(pop)
