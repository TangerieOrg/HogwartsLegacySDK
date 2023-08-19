#pragma once
#include <cstdint>
#include "FRigUnit_NeckLookAt_ConeConstraint.hpp"
#pragma pack(push, 1)
struct FRigUnit_NeckLookAt_ConeConstraintBone {
    FName Bone; // 0x0
    char pad_8[0x8];
    FRigUnit_NeckLookAt_ConeConstraint Constraint; // 0x10
}; // Size: 0x40
#pragma pack(pop)
