#pragma once
#include <cstdint>
class UAblBoneBlendWeightAsset;
#pragma pack(push, 1)
struct FAblAnimationChannel {
    char pad_0[0x10];
    int32_t Priority; // 0x10
    bool bIsAdditive; // 0x14
    char pad_15[0x3];
    UAblBoneBlendWeightAsset* BoneBlendWeightAsset; // 0x18
    char pad_20[0x50];
}; // Size: 0x70
#pragma pack(pop)
