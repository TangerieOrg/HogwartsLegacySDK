#pragma once
#include <cstdint>
#include "FIntVector.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FVolumetricCloudsWeatherPrecipitationParams {
    float Chance; // 0x0
    float Focus; // 0x4
    float Intensity; // 0x8
    FIntVector Scale; // 0xc
    FVector Offset; // 0x18
}; // Size: 0x24
#pragma pack(pop)
