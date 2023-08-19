#pragma once
#include <cstdint>
#include "FWeatherSurfaceCharacterFXStateReset.hpp"
#include "USceneAction_WeatherGeneric.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherAccumulationReset : public USceneAction_WeatherGeneric {
public:
    FWeatherSurfaceCharacterFXStateReset StateReset; // 0x88
    char pad_8a[0x2];
    float PrecipitationPercentage; // 0x8c
    float PrecipitationFadeTime; // 0x90
    float MaxWindSpeed; // 0x94
    bool bSetMaxWindSpeed; // 0x98
    char pad_99[0x7];
    static USceneAction_WeatherAccumulationReset* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
