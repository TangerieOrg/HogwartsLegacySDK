#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FFlowDynamicRippleRequest {
    float Radius; // 0x0
    float IntensityMultiplier; // 0x4
    char pad_8[0x10];
    float WaterHeight; // 0x18
    bool bUseWaterHeight; // 0x1c
    char pad_1d[0x53];
}; // Size: 0x70
#pragma pack(pop)
