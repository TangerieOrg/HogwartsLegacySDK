#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FIdentityLightTemplateSettings {
    uint8_t bOverride_Intensity : 1; // 0x0
    uint8_t bOverride_Color : 1; // 0x0
    uint8_t bOverride_Temperature : 1; // 0x0
    uint8_t bOverride_AttenuationRadius : 1; // 0x0
    uint8_t bOverride_IndirectLightingIntensity : 1; // 0x0
    uint8_t bOverride_VolumetricScatteringIntensity : 1; // 0x0
    uint8_t pad_bitfield_0_6 : 2;
    char pad_1[0x3];
    float Intensity; // 0x4
    FLinearColor LightColor; // 0x8
    float LightTemperature; // 0x18
    float AttenuationRadius; // 0x1c
    float IndirectLightingIntensity; // 0x20
    float VolumetricScatteringIntensity; // 0x24
}; // Size: 0x28
#pragma pack(pop)
