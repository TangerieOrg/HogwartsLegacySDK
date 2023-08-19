#pragma once
#include <cstdint>
#include "EBoneControlSpace.hpp"
#include "EBoneRotationSource.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "FBoneSocketTarget.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase {
    char pad_c8[0x8];
    FTransform EffectorTransform; // 0xd0
    FBoneSocketTarget EffectorTarget; // 0x100
    FBoneReference TipBone; // 0x160
    FBoneReference RootBone; // 0x170
    float Precision; // 0x180
    int32_t MaxIterations; // 0x184
    EBoneControlSpace EffectorTransformSpace; // 0x188
    EBoneRotationSource EffectorRotationSource; // 0x189
    char pad_18a[0x6];
}; // Size: 0x190
#pragma pack(pop)
