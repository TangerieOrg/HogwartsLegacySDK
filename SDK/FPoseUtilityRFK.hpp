#pragma once
#include <cstdint>
#include "FBoneReference.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FPoseUtilityRFK {
    TArray<FTransform> ChainInBaseSpace; // 0x0
    TArray<FTransform> AlignedChainInBaseSpace; // 0x10
    TArray<float> weight; // 0x20
    FBoneReference Base; // 0x30
    FBoneReference Effector; // 0x40
    FBoneReference Target; // 0x50
    int32_t IndexCount; // 0x60
    char pad_64[0x4];
}; // Size: 0x68
#pragma pack(pop)
