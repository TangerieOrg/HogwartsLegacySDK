#pragma once
#include <cstdint>
#include "FExplodingSkeletonGenericMeshSetup.hpp"
#pragma pack(push, 1)
struct FExplodingSkeletonGenericMeshSetupInstance : public FExplodingSkeletonGenericMeshSetup {
    int32_t Instances; // 0x68
    int32_t WithFX; // 0x6c
}; // Size: 0x70
#pragma pack(pop)
