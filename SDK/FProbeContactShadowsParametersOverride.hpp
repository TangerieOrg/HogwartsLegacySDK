#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FProbeContactShadowsParametersOverride {
    uint8_t bOverride_ProbeContactShadowsMinValue : 1; // 0x0
    uint8_t bOverride_ProbeContactShadowsLength : 1; // 0x0
    uint8_t bOverride_ProbeContactShadowsConeAngle : 1; // 0x0
    uint8_t bOverride_ProbeContactShadowsFalloffExponent : 1; // 0x0
    uint8_t bOverride_ProbeContactShadowsDepthTolerance : 1; // 0x0
    uint8_t pad_bitfield_0_5 : 3;
    char pad_1[0x3];
    float ProbeContactShadowsMinValue; // 0x4
    float ProbeContactShadowsLength; // 0x8
    float ProbeContactShadowsConeAngle; // 0xc
    float ProbeContactShadowsFalloffExponent; // 0x10
    float ProbeContactShadowsDepthTolerance; // 0x14
}; // Size: 0x18
#pragma pack(pop)
