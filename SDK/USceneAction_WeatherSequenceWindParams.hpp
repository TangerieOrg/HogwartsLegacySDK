#pragma once
#include <cstdint>
#include "FWindParameters.hpp"
#include "FWindParametersSampleTime.hpp"
#include "USceneAction_WeatherSequenceWind.hpp"
class UWindGustController;
#pragma pack(push, 1)
class USceneAction_WeatherSequenceWindParams : public USceneAction_WeatherSequenceWind {
public:
    FWindParameters Wind; // 0x88
    UWindGustController* WindGustController; // 0x1b0
    FWindParametersSampleTime SampleTime; // 0x1b8
    static USceneAction_WeatherSequenceWindParams* StaticClass();
}; // Size: 0x1c0
#pragma pack(pop)
