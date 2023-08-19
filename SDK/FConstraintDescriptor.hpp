#pragma once
#include <cstdint>
#include "EConstraintType.hpp"
#pragma pack(push, 1)
struct FConstraintDescriptor {
    EConstraintType Type; // 0x0
    char pad_1[0xf];
}; // Size: 0x10
#pragma pack(pop)
