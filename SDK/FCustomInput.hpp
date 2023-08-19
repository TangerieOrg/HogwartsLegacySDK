#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#pragma pack(push, 1)
struct FCustomInput {
    FName InputName; // 0x0
    FExpressionInput Input; // 0x8
}; // Size: 0x1c
#pragma pack(pop)
