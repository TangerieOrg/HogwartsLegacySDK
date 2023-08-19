#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMoonDiskState {
    FVector MoonDir; // 0x0
    FVector MoonUp; // 0xc
    float SizeFactor; // 0x18
    float Phase; // 0x1c
    FVector Sunlight; // 0x20
    FVector LocalSunLight; // 0x2c
    float UnitSunIntensity; // 0x38
    float MoonAltitudeAngle; // 0x3c
    float SunAltitudeAngle; // 0x40
    float SunMoonAngle; // 0x44
    float SunWashoutStrength; // 0x48
    float IllusionScale; // 0x4c
    float BloodFactor; // 0x50
    bool bValid; // 0x54
    char pad_55[0x3];
}; // Size: 0x58
#pragma pack(pop)
