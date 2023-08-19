#pragma once
#include <cstdint>
#include "FWindParameters.hpp"
#include "USceneAction_WeatherLocalWind.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherLocalWindParameters : public USceneAction_WeatherLocalWind {
public:
    FWindParameters WindParameters; // 0xd0
    static USceneAction_WeatherLocalWindParameters* StaticClass();
}; // Size: 0x1f8
#pragma pack(pop)
