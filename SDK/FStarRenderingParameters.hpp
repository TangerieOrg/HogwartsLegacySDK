#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStarRenderingParameters {
    float OverallRadiusMeters; // 0x0
    float StarSizeRatio; // 0x4
    float MinBrightnessSize; // 0x8
    float MaxBrightnessSize; // 0xc
    float OverallBrightness; // 0x10
}; // Size: 0x14
#pragma pack(pop)
