#pragma once
#include <cstdint>
#include "FConstraintData.hpp"
#pragma pack(push, 1)
struct FRigUnit_TransformConstraint_WorkData {
    TArray<FConstraintData> ConstraintData; // 0x0
    char pad_10[0x50];
}; // Size: 0x60
#pragma pack(pop)
