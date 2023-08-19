#pragma once
#include <cstdint>
#include "FAnimationSetup.hpp"
#include "FPerPlatformInt.hpp"
#pragma pack(push, 1)
struct FAnimationStateEntry {
    uint8_t State; // 0x0
    char pad_1[0x7];
    TArray<FAnimationSetup> AnimationSetups; // 0x8
    bool bOnDemand; // 0x18
    bool bAdditive; // 0x19
    char pad_1a[0x2];
    float BlendTime; // 0x1c
    bool bReturnToPreviousState; // 0x20
    bool bSetNextState; // 0x21
    uint8_t NextState; // 0x22
    char pad_23[0x1];
    FPerPlatformInt MaximumNumberOfConcurrentInstances; // 0x24
    float WiggleTimePercentage; // 0x28
    bool bRequiresCurves; // 0x2c
    char pad_2d[0x3];
}; // Size: 0x30
#pragma pack(pop)
