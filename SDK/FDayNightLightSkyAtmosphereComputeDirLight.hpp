#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FDayNightLightSkyAtmosphereComputeDirLight {
    FVector Direction; // 0x0
    FLinearColor Color; // 0xc
    FLinearColor ColorMod; // 0x1c
    float Intensity; // 0x2c
    float SkyIntensityMod; // 0x30
    float AltitudeDegrees; // 0x34
    float Priority; // 0x38
    char pad_3c[0x10];
}; // Size: 0x4c
#pragma pack(pop)
