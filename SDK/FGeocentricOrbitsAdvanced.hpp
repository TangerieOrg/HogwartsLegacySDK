#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FGeocentricOrbitsAdvanced {
    int32_t Samples; // 0x0
    int32_t SubSamples; // 0x4
    FVector2D TagScale; // 0x8
    float OrbitRadiusMeters; // 0x10
    float SplineMeshScale; // 0x14
    bool bHideAzimuthAltitude; // 0x18
    char pad_19[0x3];
    FColor SunTextColor; // 0x1c
    FColor MoonTextColor; // 0x20
    FColor VenusTextColor; // 0x24
    FColor MarsTextColor; // 0x28
    FColor JupiterTextColor; // 0x2c
    FColor SaturnTextColor; // 0x30
}; // Size: 0x34
#pragma pack(pop)
