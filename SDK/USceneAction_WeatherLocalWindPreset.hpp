#pragma once
#include <cstdint>
#include "FWindDefinitionName.hpp"
#include "USceneAction_WeatherLocalWind.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherLocalWindPreset : public USceneAction_WeatherLocalWind {
public:
    FWindDefinitionName Preset; // 0xd0
    static USceneAction_WeatherLocalWindPreset* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
