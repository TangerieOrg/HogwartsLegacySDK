#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCurveBuildingParams {
    int32_t SamplesPerSecond; // 0x0
    int32_t MaxSamples; // 0x4
    float MinValueChange; // 0x8
    int32_t KeyOptimizeThreshold; // 0xc
    float RedundantKeyTolerance; // 0x10
    bool bOptimize; // 0x14
    bool bCubic; // 0x15
    char pad_16[0x2];
}; // Size: 0x18
#pragma pack(pop)
