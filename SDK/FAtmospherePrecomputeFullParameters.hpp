#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAtmospherePrecomputeFullParameters {
    float RayleighHeight; // 0x0
    float MieHeight; // 0x4
    FVector BetaMieScattering; // 0x8
    float MieG; // 0x14
    FVector BetaRayleighScattering; // 0x18
    float BetaMieRatio; // 0x24
}; // Size: 0x28
#pragma pack(pop)
