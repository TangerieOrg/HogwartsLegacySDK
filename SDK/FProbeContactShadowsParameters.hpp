#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FProbeContactShadowsParameters {
    float ProbeContactShadowsMinValue; // 0x0
    float ProbeContactShadowsLength; // 0x4
    float ProbeContactShadowsConeAngle; // 0x8
    float ProbeContactShadowsFalloffExponent; // 0xc
    float ProbeContactShadowsDepthTolerance; // 0x10
}; // Size: 0x14
#pragma pack(pop)
