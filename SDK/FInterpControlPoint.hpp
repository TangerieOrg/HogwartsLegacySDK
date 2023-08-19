#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FInterpControlPoint {
    FVector PositionControlPoint; // 0x0
    bool bPositionIsRelative; // 0xc
    char pad_d[0xf];
}; // Size: 0x1c
#pragma pack(pop)
