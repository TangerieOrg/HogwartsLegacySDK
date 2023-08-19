#pragma once
#include <cstdint>
#include "FWeatherDefinitionName.hpp"
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherPreset : public USceneRigActionBase {
public:
    FWeatherDefinitionName Preset; // 0x88
    float PlaybackScale; // 0x98
    bool bInstantSwitch; // 0x9c
    bool bRestorePriorWeather; // 0x9d
    bool bRestorePriorWeatherInstant; // 0x9e
    bool bPreviewOnly; // 0x9f
    static USceneAction_WeatherPreset* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
