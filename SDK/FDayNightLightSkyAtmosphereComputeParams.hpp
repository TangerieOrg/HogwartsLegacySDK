#pragma once
#include <cstdint>
#include "FDayNightLightSkyAtmosphereComputeDirectionalLightParams.hpp"
#include "FDayNightLightSkyAtmosphereComputeSampleDirectionParams.hpp"
#pragma pack(push, 1)
struct FDayNightLightSkyAtmosphereComputeParams {
    FDayNightLightSkyAtmosphereComputeDirectionalLightParams SunParams; // 0x0
    FDayNightLightSkyAtmosphereComputeDirectionalLightParams MoonParams; // 0x30
    FDayNightLightSkyAtmosphereComputeSampleDirectionParams DirectionParams; // 0x60
    float Desaturation; // 0x70
    bool bDesaturateWithOvercast; // 0x74
    char pad_75[0x3];
}; // Size: 0x78
#pragma pack(pop)
