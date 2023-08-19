#pragma once
#include <cstdint>
#include "CopyBoneDeltaMode.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#pragma pack(push, 1)
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase {
    FBoneReference SourceBone; // 0xc8
    FBoneReference TargetBone; // 0xd8
    bool bCopyTranslation; // 0xe8
    bool bCopyRotation; // 0xe9
    bool bCopyScale; // 0xea
    CopyBoneDeltaMode CopyMode; // 0xeb
    float TranslationMultiplier; // 0xec
    float RotationMultiplier; // 0xf0
    float ScaleMultiplier; // 0xf4
}; // Size: 0xf8
#pragma pack(pop)
