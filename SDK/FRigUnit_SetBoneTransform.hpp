#pragma once
#include <cstdint>
#include "EBoneGetterSetterMode.hpp"
#include "FCachedRigElement.hpp"
#include "FRigUnitMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetBoneTransform : public FRigUnitMutable {
    FName Bone; // 0x68
    FTransform Transform; // 0x70
    FTransform Result; // 0xa0
    EBoneGetterSetterMode Space; // 0xd0
    char pad_d1[0x3];
    float weight; // 0xd4
    bool bPropagateToChildren; // 0xd8
    char pad_d9[0x3];
    FCachedRigElement CachedBone; // 0xdc
}; // Size: 0xf0
#pragma pack(pop)
