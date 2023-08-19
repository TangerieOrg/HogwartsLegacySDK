#pragma once
#include <cstdint>
#include "FAzimuthAltitudeDegrees.hpp"
#include "FDateTime.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FGeocentricOrbitInputPoint {
    FVector TopographicDir; // 0x0
    FVector Up; // 0xc
    FVector Right; // 0x18
    FVector LocalSunLight; // 0x24
    FAzimuthAltitudeDegrees AzimuthAltitude; // 0x30
    FDateTime StartDateTime; // 0x38
    FDateTime EndDateTime; // 0x40
    FString Extra; // 0x48
    int32_t Phase; // 0x58
    bool bBasisValid; // 0x5c
    bool bTimeOnly; // 0x5d
    bool bSubsample; // 0x5e
    char pad_5f[0x1];
}; // Size: 0x60
#pragma pack(pop)
