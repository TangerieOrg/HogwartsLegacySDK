#pragma once
#include <cstdint>
#include "ERangeBoundTypes\Type.hpp"
#pragma pack(push, 1)
struct FInt32RangeBound {
    ERangeBoundTypes::Type Type; // 0x0
    char pad_1[0x3];
    int32_t Value; // 0x4
}; // Size: 0x8
#pragma pack(pop)
