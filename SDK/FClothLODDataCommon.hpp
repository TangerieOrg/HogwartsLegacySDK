#pragma once
#include <cstdint>
#include "FClothCollisionData.hpp"
#include "FClothPhysicalMeshData.hpp"
#pragma pack(push, 1)
struct FClothLODDataCommon {
    FClothPhysicalMeshData PhysicalMeshData; // 0x0
    FClothCollisionData CollisionData; // 0xd8
    bool bUseMultipleInfluences; // 0x118
    char pad_119[0x3];
    float SkinningKernelRadius; // 0x11c
    char pad_120[0x20];
}; // Size: 0x140
#pragma pack(pop)
