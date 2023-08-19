#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLinearizedPathSplineAux {
    int32_t BorderIndex[2]; // 0x0
    float BorderExtent[2]; // 0x8
}; // Size: 0x10
#pragma pack(pop)
