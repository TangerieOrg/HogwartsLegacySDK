#pragma once
#include <cstdint>
#include "EBoneControlSpace.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimNode_BoneTransformMultiplier : public FAnimNode_SkeletalControlBase {
    FBoneReference BoneToModify; // 0xc8
    FVector TranslationMultiplier; // 0xd8
    FVector RotationMultiplier; // 0xe4
    FVector ScaleMultiplier; // 0xf0
    EBoneControlSpace TransformSpace; // 0xfc
    char pad_fd[0x3];
}; // Size: 0x100
#pragma pack(pop)
