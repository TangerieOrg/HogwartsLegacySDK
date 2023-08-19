#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FDayNightLightSkyAtmosphereComputeDirectionalLightParams {
    float LightIntensityMod; // 0x0
    float SkyIntensityMod; // 0x4
    FLinearColor ColorMod; // 0x8
    float FullColorDegrees; // 0x18
    float NoColorDegrees; // 0x1c
    float FullIntensityDegrees; // 0x20
    float MinIntensityDegrees; // 0x24
    float StartFadeIntensityDegrees; // 0x28
    float EndFadeIntensityDegrees; // 0x2c
}; // Size: 0x30
#pragma pack(pop)
