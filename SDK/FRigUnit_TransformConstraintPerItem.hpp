#pragma once
#include <cstdint>
#include "ETransformSpaceMode.hpp"
#include "FConstraintTarget.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FRigUnit_TransformConstraint_WorkData.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable {
    FRigElementKey Item; // 0x68
    ETransformSpaceMode BaseTransformSpace; // 0x74
    char pad_75[0xb];
    FTransform BaseTransform; // 0x80
    FRigElementKey BaseItem; // 0xb0
    char pad_bc[0x4];
    TArray<FConstraintTarget> Targets; // 0xc0
    bool bUseInitialTransforms; // 0xd0
    char pad_d1[0x7];
    FRigUnit_TransformConstraint_WorkData WorkData; // 0xd8
    char pad_138[0x8];
}; // Size: 0x140
#pragma pack(pop)
