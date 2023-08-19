#pragma once
#include <cstdint>
#include "EConstraintTransform\Type.hpp"
#pragma pack(push, 1)
struct FRigTransformConstraint {
    EConstraintTransform::Type TranformType; // 0x0
    char pad_1[0x3];
    FName ParentSpace; // 0x4
    float weight; // 0xc
}; // Size: 0x10
#pragma pack(pop)
