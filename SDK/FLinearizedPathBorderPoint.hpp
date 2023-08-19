#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FLinearizedPathBorderPoint {
    FVector2D Position; // 0x0
    int32_t FirstSplineIndex; // 0x8
    int32_t LastSplineIndex; // 0xc
}; // Size: 0x10
#pragma pack(pop)
