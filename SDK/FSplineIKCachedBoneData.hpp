#pragma once
#include <cstdint>
#include "FBoneReference.hpp"
#pragma pack(push, 1)
struct FSplineIKCachedBoneData {
    FBoneReference Bone; // 0x0
    int32_t RefSkeletonIndex; // 0x10
}; // Size: 0x14
#pragma pack(pop)
