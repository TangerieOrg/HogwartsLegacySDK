#pragma once
#include <cstdint>
#include "EBoneControlSpace.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "FBoneSocketTarget.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase {
    FVector EffectorLocation; // 0xc8
    EBoneControlSpace EffectorLocationSpace; // 0xd4
    char pad_d5[0xb];
    FBoneSocketTarget EffectorTarget; // 0xe0
    FBoneReference TipBone; // 0x140
    FBoneReference RootBone; // 0x150
    float Precision; // 0x160
    int32_t MaxIterations; // 0x164
    bool bStartFromTail; // 0x168
    bool bEnableRotationLimit; // 0x169
    char pad_16a[0x6];
    TArray<float> RotationLimitPerJoints; // 0x170
}; // Size: 0x180
#pragma pack(pop)
