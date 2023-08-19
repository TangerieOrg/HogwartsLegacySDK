#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_SpineWarp_WorkData {
    TArray<int32_t> BoneIndices; // 0x0
    FVector InitialEndControlTranslation; // 0x10
    char pad_1c[0x4];
    TArray<float> BonePitchWeights; // 0x20
    TArray<FTransform> CachedBoneTransforms; // 0x30
}; // Size: 0x40
#pragma pack(pop)
