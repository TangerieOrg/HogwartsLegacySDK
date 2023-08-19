#pragma once
#include <cstdint>
#include "EBoneAxis.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#pragma pack(push, 1)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase {
    FBoneReference TargetBone; // 0xc8
    FBoneReference SourceBone; // 0xd8
    float Multiplier; // 0xe8
    EBoneAxis RotationAxisToRefer; // 0xec
    bool bIsAdditive; // 0xed
    char pad_ee[0x2];
}; // Size: 0xf0
#pragma pack(pop)
