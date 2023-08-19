#pragma once
#include <cstdint>
#include "FVolumetricCloudsWeatherState.hpp"
#include "USceneAction_WeatherSequenceCloudsPreset.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceCloudsWeatherParams : public USceneAction_WeatherSequenceCloudsPreset {
public:
    FVolumetricCloudsWeatherState WeatherState; // 0x88
    float HeightOffset; // 0xa8
    char pad_ac[0x4];
    static USceneAction_WeatherSequenceCloudsWeatherParams* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
