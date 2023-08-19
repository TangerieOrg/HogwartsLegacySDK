#pragma once
#include <cstdint>
#include "FWindParametersInstant.hpp"
#include "USceneAction_WeatherLocalWind.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherLocalWindConstant : public USceneAction_WeatherLocalWind {
public:
    FWindParametersInstant WindParameters; // 0xd0
    static USceneAction_WeatherLocalWindConstant* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
