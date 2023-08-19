#pragma once
#include <cstdint>
#include "EConstraintOffsetOption.hpp"
#include "ETransformConstraintType.hpp"
#include "FBoneReference.hpp"
#include "FFilterOptionPerAxis.hpp"
#pragma pack(push, 1)
struct FConstraint {
    FBoneReference TargetBone; // 0x0
    EConstraintOffsetOption OffsetOption; // 0x10
    ETransformConstraintType TransformType; // 0x11
    FFilterOptionPerAxis PerAxis; // 0x12
    char pad_15[0x7];
}; // Size: 0x1c
#pragma pack(pop)
