#pragma once
#include <cstdint>
#include "FExplodingSkeletonBoneMesh.hpp"
#pragma pack(push, 1)
struct FExplodingSkeletonBoneMeshSetup {
    FName AttachTo; // 0x0
    TArray<FExplodingSkeletonBoneMesh> Meshes; // 0x8
}; // Size: 0x18
#pragma pack(pop)
