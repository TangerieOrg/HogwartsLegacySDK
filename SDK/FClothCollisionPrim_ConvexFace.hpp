#pragma once
#include <cstdint>
#include "FPlane.hpp"
#pragma pack(push, 1)
struct FClothCollisionPrim_ConvexFace {
    FPlane Plane; // 0x0
    TArray<int32_t> Indices; // 0x10
}; // Size: 0x20
#pragma pack(pop)
