#pragma once
#include <cstdint>
#include "USceneAction_WeatherGeneric.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherPrecipitationPercentage : public USceneAction_WeatherGeneric {
public:
    float PrecipitationPercentage; // 0x88
    float PrecipitationFadeTime; // 0x8c
    static USceneAction_WeatherPrecipitationPercentage* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
