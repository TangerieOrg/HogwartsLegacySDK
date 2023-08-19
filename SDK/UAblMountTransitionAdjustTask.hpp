#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblMountTransitionAdjustTask : public UAblAbilityTask {
public:
    FName CreatureMountSocketName; // 0x70
    FName CreatureTransitionBoneName; // 0x78
    FName CreatureAttachSocketName; // 0x80
    float AttachBlendTime; // 0x88
    float MaxInterpolateFactor; // 0x8c
    FRuntimeFloatCurve InterpolateWeightCurve; // 0x90
    bool bDrawDebug; // 0x118
    char pad_119[0x7];
    static UAblMountTransitionAdjustTask* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
