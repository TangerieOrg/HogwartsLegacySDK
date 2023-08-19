#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FProbeLightingAdjustmentParameters {
    float ProbeOutsideIntensity; // 0x0
    float ProbeInsideIntensity; // 0x4
    float ProbeOutsideSaturation; // 0x8
    float ProbeInsideSaturation; // 0xc
}; // Size: 0x10
#pragma pack(pop)
