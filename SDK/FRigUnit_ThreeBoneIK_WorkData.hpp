#pragma once
#include <cstdint>
#include "FRigBoneHierarchy.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_ThreeBoneIK_WorkData {
    TArray<int32_t> BoneIndices; // 0x0
    TArray<float> BoneLengths; // 0x10
    TArray<FTransform> HelperTransforms; // 0x20
    FRigBoneHierarchy ChainHierarchy; // 0x30
}; // Size: 0xc8
#pragma pack(pop)
