#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigBoneHierarchy.hpp"
#include "FRigUnit_NeckLookAt_ConeConstraint.hpp"
#pragma pack(push, 1)
struct FRigUnit_NeckLookAt_WorkData {
    TArray<int32_t> BoneIndices; // 0x0
    TArray<FQuat> BoneLocalRotations; // 0x10
    TArray<FRigUnit_NeckLookAt_ConeConstraint> PerBoneConstraints; // 0x20
    TArray<float> BoneLengths; // 0x30
    float ChainLength; // 0x40
    char pad_44[0x4];
    TArray<float> BoneYawWeights; // 0x48
    TArray<float> BonePitchWeights; // 0x58
    FRigBoneHierarchy ChainHierarchy; // 0x68
    char pad_100[0xe0];
}; // Size: 0x1e0
#pragma pack(pop)
