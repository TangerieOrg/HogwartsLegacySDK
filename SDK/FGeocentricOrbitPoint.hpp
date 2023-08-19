#pragma once
#include <cstdint>
#include "FAzimuthAltitudeDegrees.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FGeocentricOrbitPoint {
    FVector TopographicDir; // 0x0
    FVector Up; // 0xc
    FVector Right; // 0x18
    FAzimuthAltitudeDegrees AzimuthAltitude; // 0x24
    bool bBasisValid; // 0x2c
    char pad_2d[0x3];
}; // Size: 0x30
#pragma pack(pop)
