#pragma once
#include <cstdint>
#include "EBoneGetterSetterMode.hpp"
#include "FCachedRigElement.hpp"
#include "FQuat.hpp"
#include "FRigUnitMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetBoneRotation : public FRigUnitMutable {
    FName Bone; // 0x68
    FQuat Rotation; // 0x70
    EBoneGetterSetterMode Space; // 0x80
    char pad_81[0x3];
    float weight; // 0x84
    bool bPropagateToChildren; // 0x88
    char pad_89[0x3];
    FCachedRigElement CachedBone; // 0x8c
}; // Size: 0xa0
#pragma pack(pop)
