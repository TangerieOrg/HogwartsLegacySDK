#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherCloudsTime : public USceneRigActionBase {
public:
    float OffsetTime; // 0x88
    FVector2D OffsetWeather; // 0x8c
    char pad_94[0x4];
    static USceneAction_WeatherCloudsTime* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
