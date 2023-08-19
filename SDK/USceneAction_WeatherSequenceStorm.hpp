#pragma once
#include <cstdint>
#include "EWeatherSurfacePrecipitation.hpp"
#include "EWeatherSurfaceStormType.hpp"
#include "USceneAction_WeatherSequence.hpp"
class UWeatherSurfaceDataAsset;
#pragma pack(push, 1)
class USceneAction_WeatherSequenceStorm : public USceneAction_WeatherSequence {
public:
    EWeatherSurfacePrecipitation PrecipitationType; // 0x88
    EWeatherSurfaceStormType Type; // 0x89
    char pad_8a[0x2e];
    UWeatherSurfaceDataAsset* PreloadedPrecipitation; // 0xb8
    static USceneAction_WeatherSequenceStorm* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
