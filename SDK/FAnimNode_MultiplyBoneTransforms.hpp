#pragma once
#include <cstdint>
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#pragma pack(push, 1)
struct FAnimNode_MultiplyBoneTransforms : public FAnimNode_SkeletalControlBase {
    FBoneReference SourceBone; // 0xc8
    TArray<FBoneReference> TargetBones; // 0xd8
    bool bInvert; // 0xe8
    char pad_e9[0x7];
}; // Size: 0xf0
#pragma pack(pop)
