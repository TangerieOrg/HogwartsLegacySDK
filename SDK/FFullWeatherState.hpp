#pragma once
#include <cstdint>
#include "FExpHeightFogParameters.hpp"
#include "FExpHeightFogVolumetricNoiseParameters.hpp"
#include "FSunDiskOverrides.hpp"
#include "FSurfaceFogParameters.hpp"
#include "FVolumetricCloudsPresetParameters.hpp"
#include "FVolumetricCloudsWindParameters.hpp"
#include "FWeatherStormParams.hpp"
#pragma pack(push, 1)
struct FFullWeatherState {
    FVolumetricCloudsPresetParameters CloudsPreset; // 0x0
    FVolumetricCloudsWindParameters CloudsWind; // 0x110
    FSunDiskOverrides SunDiskOverrides; // 0x14c
    FExpHeightFogParameters Fog; // 0x160
    FExpHeightFogVolumetricNoiseParameters FogNoiseOverride; // 0x338
    FExpHeightFogVolumetricNoiseParameters FogNoiseOverrideHistory; // 0x380
    float Overcast; // 0x3c8
    float Cold; // 0x3cc
    FWeatherStormParams Storm; // 0x3d0
    FSurfaceFogParameters SurfaceFog; // 0x3e8
    uint8_t bFogFollowCamera : 1; // 0x3f0
    uint8_t bCloudsPresetValid : 1; // 0x3f0
    uint8_t bCloudsWindValid : 1; // 0x3f0
    uint8_t bSunDiskOverridesValid : 1; // 0x3f0
    uint8_t bFogValid : 1; // 0x3f0
    uint8_t bFogNoiseOverrideValid : 1; // 0x3f0
    uint8_t bFogNoiseOverrideHistoryValid : 1; // 0x3f0
    uint8_t bOvercastValid : 1; // 0x3f0
    uint8_t bColdValid : 1; // 0x3f1
    uint8_t bPrecipitationValid : 1; // 0x3f1
    uint8_t bStormTypeValid : 1; // 0x3f1
    uint8_t bStormCoverageValid : 1; // 0x3f1
    uint8_t bStormIntensityValid : 1; // 0x3f1
    uint8_t bStormHeightValid : 1; // 0x3f1
    uint8_t bSurfaceFogTypeValid : 1; // 0x3f1
    uint8_t bSurfaceFogIntensityValid : 1; // 0x3f1
    char pad_3f2[0x6];
}; // Size: 0x3f8
#pragma pack(pop)
