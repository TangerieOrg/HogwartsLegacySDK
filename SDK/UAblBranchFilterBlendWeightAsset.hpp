#pragma once
#include <cstdint>
#include "FMyInputBlendPose.hpp"
#include "UAblBoneBlendWeightAsset.hpp"
#pragma pack(push, 1)
class UAblBranchFilterBlendWeightAsset : public UAblBoneBlendWeightAsset {
public:
    TArray<FMyInputBlendPose> LayerSetup; // 0x88
    static UAblBranchFilterBlendWeightAsset* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
