#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnitMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_AddBoneTransform : public FRigUnitMutable {
    FName Bone; // 0x68
    FTransform Transform; // 0x70
    float weight; // 0xa0
    bool bPostMultiply; // 0xa4
    bool bPropagateToChildren; // 0xa5
    char pad_a6[0x2];
    FCachedRigElement CachedBone; // 0xa8
    char pad_bc[0x4];
}; // Size: 0xc0
#pragma pack(pop)
