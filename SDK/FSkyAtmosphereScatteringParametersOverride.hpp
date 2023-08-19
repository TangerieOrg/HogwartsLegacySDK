#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FSkyAtmosphereScatteringParametersOverride {
    uint8_t bOverride_MultiScatteringFactor : 1; // 0x0
    uint8_t bOverride_RayleighScatteringScale : 1; // 0x0
    uint8_t bOverride_RayleighScattering : 1; // 0x0
    uint8_t bOverride_RayleighExponentialDistribution : 1; // 0x0
    uint8_t bOverride_MieScatteringScale : 1; // 0x0
    uint8_t bOverride_MieScattering : 1; // 0x0
    uint8_t bOverride_MieAbsorptionScale : 1; // 0x0
    uint8_t bOverride_MieAbsorption : 1; // 0x0
    uint8_t bOverride_MieAnisotropy : 1; // 0x1
    uint8_t bOverride_MieExponentialDistribution : 1; // 0x1
    uint8_t pad_bitfield_1_2 : 6;
    char pad_2[0x2];
    float MultiScatteringFactor; // 0x4
    float RayleighScatteringScale; // 0x8
    FLinearColor RayleighScattering; // 0xc
    float RayleighExponentialDistribution; // 0x1c
    float MieScatteringScale; // 0x20
    FLinearColor MieScattering; // 0x24
    float MieAbsorptionScale; // 0x34
    FLinearColor MieAbsorption; // 0x38
    float MieAnisotropy; // 0x48
    float MieExponentialDistribution; // 0x4c
}; // Size: 0x50
#pragma pack(pop)
