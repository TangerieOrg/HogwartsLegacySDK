#pragma once
#include <cstdint>
#include "EWeightMapTargetCommon.hpp"
#pragma pack(push, 1)
struct FClothParameterMask_Legacy {
    FName MaskName; // 0x0
    EWeightMapTargetCommon CurrentTarget; // 0x8
    char pad_9[0x3];
    float MaxValue; // 0xc
    float MinValue; // 0x10
    char pad_14[0x4];
    TArray<float> Values; // 0x18
    bool bEnabled; // 0x28
    char pad_29[0x7];
}; // Size: 0x30
#pragma pack(pop)
