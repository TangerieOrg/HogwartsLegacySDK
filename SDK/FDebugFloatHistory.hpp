#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDebugFloatHistory {
    TArray<float> Samples; // 0x0
    float MaxSamples; // 0x10
    float MinValue; // 0x14
    float MaxValue; // 0x18
    bool bAutoAdjustMinMax; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
