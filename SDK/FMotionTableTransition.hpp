#pragma once
#include <cstdint>
#include "FFloatInterval.hpp"
#pragma pack(push, 1)
struct FMotionTableTransition {
    float TransitionDuration; // 0x0
    float TransitionTravelDistance; // 0x4
    TArray<FFloatInterval> TransitionMarkerTimes; // 0x8
    float TargetStateCycleTime; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
