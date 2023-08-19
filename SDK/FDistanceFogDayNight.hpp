#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FDistanceFogDayNight {
    FVector SunDirection; // 0x0
    float NightDay; // 0xc
    float MoonBrightness; // 0x10
}; // Size: 0x14
#pragma pack(pop)
