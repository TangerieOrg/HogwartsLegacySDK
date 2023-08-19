#pragma once
#include <cstdint>
#include "FKey.hpp"
#pragma pack(push, 1)
struct FInputAxisKeyMapping {
    FName AxisName; // 0x0
    float Scale; // 0x8
    char pad_c[0x4];
    FKey Key; // 0x10
    FName GroupName; // 0x28
    int32_t SortIndex; // 0x30
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
