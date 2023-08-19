#pragma once
#include <cstdint>
#include "FConstraintOffset.hpp"
#include "FTransform.hpp"
#include "FTransformConstraint.hpp"
#pragma pack(push, 1)
struct FConstraintNodeData {
    FTransform RelativeParent; // 0x0
    FConstraintOffset ConstraintOffset; // 0x30
    FName LinkedNode; // 0x90
    TArray<FTransformConstraint> Constraints; // 0x98
    char pad_a8[0x8];
}; // Size: 0xb0
#pragma pack(pop)
