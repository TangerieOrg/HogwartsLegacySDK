#pragma once
#include <cstdint>
#include "FColor.hpp"
#pragma pack(push, 1)
struct FSkyLightBasicParametersOverride {
    uint8_t bOverride_Intensity : 1; // 0x0
    uint8_t bOverride_LightColor : 1; // 0x0
    uint8_t bOverride_IndirectLightingIntensity : 1; // 0x0
    uint8_t bOverride_VolumetricScatteringIntensity : 1; // 0x0
    uint8_t pad_bitfield_0_4 : 4;
    char pad_1[0x3];
    float Intensity; // 0x4
    FColor LightColor; // 0x8
    float IndirectLightingIntensity; // 0xc
    float VolumetricScatteringIntensity; // 0x10
}; // Size: 0x14
#pragma pack(pop)
