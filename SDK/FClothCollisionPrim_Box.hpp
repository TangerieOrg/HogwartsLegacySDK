#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FClothCollisionPrim_Box {
    FVector LocalPosition; // 0x0
    char pad_c[0x4];
    FQuat LocalRotation; // 0x10
    FVector HalfExtents; // 0x20
    int32_t BoneIndex; // 0x2c
}; // Size: 0x30
#pragma pack(pop)
