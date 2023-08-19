#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FVolumetricCloudsWindParametersOverride {
    uint8_t bOverride_WindSpeed : 1; // 0x0
    uint8_t bOverride_WindSkew : 1; // 0x0
    uint8_t bOverride_WeatherSpeed : 1; // 0x0
    uint8_t bOverride_SkyLightWeatherSpeedScale : 1; // 0x0
    uint8_t bOverride_HighAltitudeSpeed : 1; // 0x0
    uint8_t pad_bitfield_0_5 : 3;
    char pad_1[0x3];
    FVector WindSpeed; // 0x4
    float WindSkew; // 0x10
    FVector WeatherSpeed; // 0x14
    float SkyLightWeatherSpeedScale; // 0x20
    FVector HighAltitudeSpeed; // 0x24
}; // Size: 0x30
#pragma pack(pop)
