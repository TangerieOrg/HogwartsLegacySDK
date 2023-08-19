#pragma once
#include <cstdint>
#include "FIntPoint.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FWorldWindOffset {
    FIntPoint WindOffsetKM; // 0x0
    FVector2D WindOffsetM; // 0x8
    float Age; // 0x10
}; // Size: 0x14
#pragma pack(pop)
