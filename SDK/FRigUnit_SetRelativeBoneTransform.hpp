#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnitMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable {
    FName Bone; // 0x68
    FName Space; // 0x70
    char pad_78[0x8];
    FTransform Transform; // 0x80
    float weight; // 0xb0
    bool bPropagateToChildren; // 0xb4
    char pad_b5[0x3];
    FCachedRigElement CachedBone; // 0xb8
    FCachedRigElement CachedSpaceIndex; // 0xcc
}; // Size: 0xe0
#pragma pack(pop)
