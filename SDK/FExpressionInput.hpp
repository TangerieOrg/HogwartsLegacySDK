#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FExpressionInput {
    int32_t OutputIndex; // 0x0
    FName InputName; // 0x4
    FName ExpressionName; // 0xc
}; // Size: 0x14
#pragma pack(pop)
