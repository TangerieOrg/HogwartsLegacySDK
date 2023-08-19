#pragma once
#include <cstdint>
#include "EFixedSunPositionInputType.hpp"
#pragma pack(push, 1)
struct FFixedSunPositionInput {
    float Altitude; // 0x0
    EFixedSunPositionInputType Type; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
