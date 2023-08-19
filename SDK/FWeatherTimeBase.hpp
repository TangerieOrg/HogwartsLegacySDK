#pragma once
#include <cstdint>
#include "FTimespan.hpp"
#pragma pack(push, 1)
struct FWeatherTimeBase {
    FTimespan RealElapsedTime; // 0x0
    FTimespan GameElapsedTime; // 0x8
}; // Size: 0x10
#pragma pack(pop)
