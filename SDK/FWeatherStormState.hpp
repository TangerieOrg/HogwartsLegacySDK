#pragma once
#include <cstdint>
#include "FWeatherStormParams.hpp"
#pragma pack(push, 1)
struct FWeatherStormState : public FWeatherStormParams {
    float Age; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
