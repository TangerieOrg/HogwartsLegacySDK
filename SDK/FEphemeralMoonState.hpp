#pragma once
#include <cstdint>
#include "EMoonPhaseName.hpp"
#include "FTopographicDirection.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FEphemeralMoonState : public FTopographicDirection {
    FVector Up; // 0x14
    FVector Right; // 0x20
    FVector LocalSunLight; // 0x2c
    float UnitSize; // 0x38
    float Phase; // 0x3c
    float DiskPhase; // 0x40
    EMoonPhaseName PhaseName; // 0x44
    char pad_45[0x3];
    float Blood; // 0x48
    float MoonPeriodDaysOverride; // 0x4c
    float DiskScale; // 0x50
    float AboveHorizon; // 0x54
    float Visibility; // 0x58
    float SunAngleDegrees; // 0x5c
}; // Size: 0x60
#pragma pack(pop)
