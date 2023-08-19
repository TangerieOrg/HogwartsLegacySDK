#pragma once
#include <cstdint>
#include "FAnimNode_AssetPlayerBase.hpp"
class UPoseAsset;
#pragma pack(push, 1)
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase {
    UPoseAsset* PoseAsset; // 0x38
    char pad_40[0x40];
}; // Size: 0x80
#pragma pack(pop)
