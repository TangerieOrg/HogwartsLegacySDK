#pragma once
#include <cstdint>
#include "FEnvironmentalGlobalsSeasonLerp.hpp"
#pragma pack(push, 1)
struct FEnvironmentalGlobalsSeason : public FEnvironmentalGlobalsSeasonLerp {
    float SeasonSmooth; // 0x10
    float FallSmooth; // 0x14
    float WinterSmooth; // 0x18
    float SpringSmooth; // 0x1c
    float SummerSmooth; // 0x20
}; // Size: 0x24
#pragma pack(pop)
