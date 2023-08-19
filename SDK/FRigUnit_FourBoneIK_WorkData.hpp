#pragma once
#include <cstdint>
#include "FRigBoneHierarchy.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_FourBoneIK_WorkData {
    TArray<int32_t> BoneIndices; // 0x0
    TArray<float> BoneLengths; // 0x10
    TArray<FTransform> HelperATransforms; // 0x20
    TArray<FTransform> HelperBTransforms; // 0x30
    FRigBoneHierarchy ChainHierarchy; // 0x40
}; // Size: 0xd8
#pragma pack(pop)
