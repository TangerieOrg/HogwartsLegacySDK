#pragma once
#include <cstdint>
#include "USceneAction_WeatherSequenceWind.hpp"
class UWindGustController;
#pragma pack(push, 1)
class USceneAction_WeatherSequenceWindRandomParams : public USceneAction_WeatherSequenceWind {
public:
    float MinAngle; // 0x88
    float MaxAngle; // 0x8c
    float MinSpeed; // 0x90
    float MaxSpeed; // 0x94
    UWindGustController* WindGustController; // 0x98
    static USceneAction_WeatherSequenceWindRandomParams* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
