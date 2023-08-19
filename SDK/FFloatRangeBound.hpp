#pragma once
#include <cstdint>
#include "ERangeBoundTypes\Type.hpp"
#pragma pack(push, 1)
struct FFloatRangeBound {
    ERangeBoundTypes::Type Type; // 0x0
    char pad_1[0x3];
    float Value; // 0x4
}; // Size: 0x8
#pragma pack(pop)
