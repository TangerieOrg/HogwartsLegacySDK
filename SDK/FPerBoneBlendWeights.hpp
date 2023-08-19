#pragma once
#include <cstdint>
#include "FPerBoneBlendWeight.hpp"
#pragma pack(push, 1)
struct FPerBoneBlendWeights {
    TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
}; // Size: 0x10
#pragma pack(pop)
