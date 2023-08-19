#pragma once
#include <cstdint>
#include "ESeasonEnum.hpp"
#pragma pack(push, 1)
struct FEnvironmentalGlobalsSeasonLerp {
    ESeasonEnum Season; // 0x0
    char pad_1[0x3];
    int32_t Phases; // 0x4
    int32_t Phase; // 0x8
    float Lerp; // 0xc
}; // Size: 0x10
#pragma pack(pop)
