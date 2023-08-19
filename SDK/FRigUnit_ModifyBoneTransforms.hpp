#pragma once
#include <cstdint>
#include "EControlRigModifyBoneMode.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FRigUnit_ModifyBoneTransforms_PerBone.hpp"
#include "FRigUnit_ModifyBoneTransforms_WorkData.hpp"
#pragma pack(push, 1)
struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable {
    TArray<FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify; // 0x68
    float weight; // 0x78
    float WeightMinimum; // 0x7c
    float WeightMaximum; // 0x80
    EControlRigModifyBoneMode Mode; // 0x84
    char pad_85[0x3];
    FRigUnit_ModifyBoneTransforms_WorkData WorkData; // 0x88
}; // Size: 0x98
#pragma pack(pop)
