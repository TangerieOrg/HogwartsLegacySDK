#pragma once
#include <cstdint>
#include "FPoseDataContainer.hpp"
#include "FTransform.hpp"
#include "UAnimationAsset.hpp"
#pragma pack(push, 1)
class UPoseAsset : public UAnimationAsset {
public:
    FPoseDataContainer PoseContainer; // 0x80
    bool bAdditivePose; // 0x110
    char pad_111[0x3];
    int32_t BasePoseIndex; // 0x114
    FName RetargetSource; // 0x118
    TArray<FTransform> RetargetSourceAssetReferencePose; // 0x120
    static UPoseAsset* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
