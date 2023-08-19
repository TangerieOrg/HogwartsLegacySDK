#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FProbeLightingAdjustmentParametersOverride {
    uint8_t bOverride_ProbeOutsideIntensity : 1; // 0x0
    uint8_t bOverride_ProbeInsideIntensity : 1; // 0x0
    uint8_t bOverride_ProbeOutsideSaturation : 1; // 0x0
    uint8_t bOverride_ProbeInsideSaturation : 1; // 0x0
    uint8_t pad_bitfield_0_4 : 4;
    char pad_1[0x3];
    float ProbeOutsideIntensity; // 0x4
    float ProbeInsideIntensity; // 0x8
    float ProbeOutsideSaturation; // 0xc
    float ProbeInsideSaturation; // 0x10
}; // Size: 0x14
#pragma pack(pop)
