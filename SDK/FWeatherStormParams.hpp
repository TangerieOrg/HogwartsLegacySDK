#pragma once
#include <cstdint>
#include "EWeatherSurfacePrecipitation.hpp"
#include "EWeatherSurfaceStormType.hpp"
#pragma pack(push, 1)
struct FWeatherStormParams {
    char pad_0[0x8];
    EWeatherSurfacePrecipitation Precipitation; // 0x8
    EWeatherSurfaceStormType Type; // 0x9
    char pad_a[0x2];
    float Coverage; // 0xc
    float Intensity; // 0x10
    float StormHeight; // 0x14
}; // Size: 0x18
#pragma pack(pop)
