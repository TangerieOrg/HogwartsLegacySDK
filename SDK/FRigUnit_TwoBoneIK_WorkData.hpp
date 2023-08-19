#pragma once
#include <cstdint>
#include "FRigBoneHierarchy.hpp"
#pragma pack(push, 1)
struct FRigUnit_TwoBoneIK_WorkData {
    TArray<int32_t> BoneIndices; // 0x0
    TArray<float> BoneLengths; // 0x10
    FRigBoneHierarchy ChainHierarchy; // 0x20
}; // Size: 0xb8
#pragma pack(pop)
