#pragma once
#include <cstdint>
#include "EValueComparison.hpp"
#pragma pack(push, 1)
struct FValueComparison {
    EValueComparison ComparisonOperator; // 0x0
    char pad_1[0x3];
    int32_t ComparisonValue; // 0x4
}; // Size: 0x8
#pragma pack(pop)
