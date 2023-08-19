#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FVolumetricCloudsWeatherState {
    float Temperature; // 0x0
    float TemperatureChange; // 0x4
    float TemperatureDifference; // 0x8
    float CloudChance; // 0xc
    float RainChance; // 0x10
    FVector Wind; // 0x14
}; // Size: 0x20
#pragma pack(pop)
