#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#include "FVolumetricCloudsDetailParams.hpp"
#include "FVolumetricCloudsHighAltitudeParams.hpp"
#include "FVolumetricCloudsWeatherCoverageParams.hpp"
#include "FVolumetricCloudsWeatherPrecipitationParams.hpp"
#include "FVolumetricCloudsWeatherTypeParams.hpp"
class UTexture2D;
#pragma pack(push, 1)
struct FVolumetricCloudsPresetParams : public FTableRowBase {
    FVolumetricCloudsWeatherCoverageParams WeatherCoverage; // 0x8
    FVolumetricCloudsWeatherTypeParams WeatherType; // 0x40
    FVolumetricCloudsWeatherPrecipitationParams WeatherPrecipitation; // 0x64
    FVolumetricCloudsHighAltitudeParams HighAltitude; // 0x88
    FVolumetricCloudsDetailParams Detail; // 0xc8
    UTexture2D* OverrideWeather; // 0xf0
    UTexture2D* OverrideTypeLut; // 0xf8
    char pad_100[0x8];
}; // Size: 0x108
#pragma pack(pop)
