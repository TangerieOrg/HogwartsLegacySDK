#pragma once
#include <cstdint>
#include "FVolumetricCloudsWeatherWindParams.hpp"
#include "USceneAction_WeatherSequenceCloudsWind.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceCloudsWindParams : public USceneAction_WeatherSequenceCloudsWind {
public:
    FVolumetricCloudsWeatherWindParams WindParams; // 0x88
    char pad_c4[0x4];
    static USceneAction_WeatherSequenceCloudsWindParams* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
