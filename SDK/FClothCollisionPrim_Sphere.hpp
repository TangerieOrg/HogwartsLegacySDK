#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FClothCollisionPrim_Sphere {
    int32_t BoneIndex; // 0x0
    float Radius; // 0x4
    FVector LocalPosition; // 0x8
}; // Size: 0x14
#pragma pack(pop)
