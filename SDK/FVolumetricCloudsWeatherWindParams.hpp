#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FVolumetricCloudsWeatherWindParams {
    bool UseWindSystemDirection; // 0x0
    char pad_1[0x3];
    float WindSpeedScale; // 0x4
    float WeatherSpeedScale; // 0x8
    float HighAltitudeSpeedScale; // 0xc
    FVector WindSpeed; // 0x10
    FVector WeatherSpeed; // 0x1c
    FVector HighAltitudeSpeed; // 0x28
    float WindSkew; // 0x34
    float SkyLightWeatherSpeedScale; // 0x38
}; // Size: 0x3c
#pragma pack(pop)
