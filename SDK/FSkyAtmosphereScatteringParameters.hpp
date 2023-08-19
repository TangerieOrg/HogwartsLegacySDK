#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FSkyAtmosphereScatteringParameters {
    float MultiScatteringFactor; // 0x0
    float RayleighScatteringScale; // 0x4
    FLinearColor RayleighScattering; // 0x8
    float RayleighExponentialDistribution; // 0x18
    float MieScatteringScale; // 0x1c
    FLinearColor MieScattering; // 0x20
    float MieAbsorptionScale; // 0x30
    FLinearColor MieAbsorption; // 0x34
    float MieAnisotropy; // 0x44
    float MieExponentialDistribution; // 0x48
}; // Size: 0x4c
#pragma pack(pop)
