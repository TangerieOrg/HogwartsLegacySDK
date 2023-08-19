#pragma once
#include <cstdint>
#include "FColor.hpp"
#pragma pack(push, 1)
struct FDirectionalLightBasicParametersOverride {
    uint8_t bOverride_Intensity : 1; // 0x0
    uint8_t bOverride_LightColor : 1; // 0x0
    uint8_t bOverride_Temperature : 1; // 0x0
    uint8_t bOverride_UseTemperature : 1; // 0x0
    uint8_t bOverride_SpecularScale : 1; // 0x0
    uint8_t bOverride_IndirectLightingIntensity : 1; // 0x0
    uint8_t bOverride_VolumetricScatteringIntensity : 1; // 0x0
    uint8_t bOverride_AtmosphereSunLightPriority : 1; // 0x0
    uint8_t bOverride_bPseudoLight : 1; // 0x1
    uint8_t pad_bitfield_1_1 : 7;
    char pad_2[0x2];
    float Intensity; // 0x4
    FColor LightColor; // 0x8
    float Temperature; // 0xc
    bool bUseTemperature; // 0x10
    char pad_11[0x3];
    float SpecularScale; // 0x14
    float IndirectLightingIntensity; // 0x18
    float VolumetricScatteringIntensity; // 0x1c
    float AtmosphereSunLightPriority; // 0x20
    bool bPseudoLight; // 0x24
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)
