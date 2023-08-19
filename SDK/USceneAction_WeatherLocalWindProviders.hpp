#pragma once
#include <cstdint>
#include "USceneAction_WeatherLocalWind.hpp"
class UVectorProvider;
class UFloatProvider;
#pragma pack(push, 1)
class USceneAction_WeatherLocalWindProviders : public USceneAction_WeatherLocalWind {
public:
    UVectorProvider* Direction; // 0xd0
    UFloatProvider* Speed; // 0xd8
    static USceneAction_WeatherLocalWindProviders* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
