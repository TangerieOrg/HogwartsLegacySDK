#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCollisionLineSegment {
    FVector Origin; // 0x0
    FVector Dir; // 0xc
    float Length; // 0x18
    float ClosestIntersectionT; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
