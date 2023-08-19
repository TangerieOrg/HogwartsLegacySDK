#pragma once
#include <cstdint>
#include "EControlRigModifyBoneMode.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FRigUnit_ModifyTransforms_PerItem.hpp"
#include "FRigUnit_ModifyTransforms_WorkData.hpp"
#pragma pack(push, 1)
struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable {
    TArray<FRigUnit_ModifyTransforms_PerItem> ItemToModify; // 0x68
    float weight; // 0x78
    float WeightMinimum; // 0x7c
    float WeightMaximum; // 0x80
    EControlRigModifyBoneMode Mode; // 0x84
    char pad_85[0x3];
    FRigUnit_ModifyTransforms_WorkData WorkData; // 0x88
}; // Size: 0x98
#pragma pack(pop)
