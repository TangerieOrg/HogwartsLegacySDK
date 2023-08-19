#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
class UAblBlendSpaceParameterGetter;
class UAblBoneBlendWeightAsset;
#pragma pack(push, 1)
struct FBlendTrackInfo {
    FGameplayTagContainer AnimationTags; // 0x0
    UAblBlendSpaceParameterGetter* BlendSpaceParameterGetter; // 0x20
    bool bIsAdditive; // 0x28
    bool bRotationOffsetMeshSpace; // 0x29
    bool bOverrideMeshSpaceRotationBlend; // 0x2a
    bool bMeshSpaceRotationBlend; // 0x2b
    bool bLoop; // 0x2c
    char pad_2d[0x3];
    UAblBoneBlendWeightAsset* BoneWeightAsset; // 0x30
}; // Size: 0x38
#pragma pack(pop)
