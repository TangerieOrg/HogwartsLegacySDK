#pragma once
#include <cstdint>
#include "FIntVector.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FVolumetricCloudsWeatherCoverageParams {
    float Chance; // 0x0
    float Focus; // 0x4
    float Intensity; // 0x8
    FIntVector PerlinScale; // 0xc
    float PerlinIntensity; // 0x18
    FIntVector WorleyScale; // 0x1c
    float WorleyIntensity; // 0x28
    FVector Offset; // 0x2c
}; // Size: 0x38
#pragma pack(pop)
