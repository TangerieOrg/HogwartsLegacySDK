#pragma once
#include <cstdint>
#include "ETransformSpaceMode.hpp"
#include "FConstraintTarget.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FRigUnit_TransformConstraint_WorkData.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable {
    FName Bone; // 0x68
    ETransformSpaceMode BaseTransformSpace; // 0x70
    char pad_71[0xf];
    FTransform BaseTransform; // 0x80
    FName BaseBone; // 0xb0
    TArray<FConstraintTarget> Targets; // 0xb8
    bool bUseInitialTransforms; // 0xc8
    char pad_c9[0x7];
    FRigUnit_TransformConstraint_WorkData WorkData; // 0xd0
}; // Size: 0x130
#pragma pack(pop)
