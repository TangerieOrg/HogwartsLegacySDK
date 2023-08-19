#pragma once
#include <cstdint>
#include "FClothCollisionPrim_ConvexFace.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FClothCollisionPrim_Convex {
    TArray<FClothCollisionPrim_ConvexFace> Faces; // 0x0
    TArray<FVector> SurfacePoints; // 0x10
    int32_t BoneIndex; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
