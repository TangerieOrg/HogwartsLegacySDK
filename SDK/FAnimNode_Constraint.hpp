#pragma once
#include <cstdint>
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "FConstraint.hpp"
#pragma pack(push, 1)
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase {
    FBoneReference BoneToModify; // 0xc8
    TArray<FConstraint> ConstraintSetup; // 0xd8
    TArray<float> ConstraintWeights; // 0xe8
    char pad_f8[0x10];
}; // Size: 0x108
#pragma pack(pop)
