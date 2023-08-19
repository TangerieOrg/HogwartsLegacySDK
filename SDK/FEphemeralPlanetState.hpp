#pragma once
#include <cstdint>
#include "FTopographicDirection.hpp"
#pragma pack(push, 1)
struct FEphemeralPlanetState : public FTopographicDirection {
    float SunLighting; // 0x14
    float SunAngleDegrees; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
