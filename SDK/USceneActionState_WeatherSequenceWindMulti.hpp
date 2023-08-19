#pragma once
#include <cstdint>
#include "FWeatherTimeBase.hpp"
#include "FWindParameters.hpp"
#include "FWindParametersSampleTime.hpp"
#include "USceneActionState_WeatherSequence.hpp"
class UWindGustController;
#pragma pack(push, 1)
class USceneActionState_WeatherSequenceWindMulti : public USceneActionState_WeatherSequence {
public:
    char pad_50[0x8];
    FWindParameters WindParameters; // 0x58
    FWindParametersSampleTime SampleTime; // 0x180
    UWindGustController* WindGustController; // 0x188
    FWeatherTimeBase StartWeatherTime; // 0x190
    int32_t Index; // 0x1a0
    bool bValidParameters; // 0x1a4
    char pad_1a5[0x3];
    static USceneActionState_WeatherSequenceWindMulti* StaticClass();
}; // Size: 0x1a8
#pragma pack(pop)
