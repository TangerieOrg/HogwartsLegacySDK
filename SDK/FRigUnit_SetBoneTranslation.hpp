#pragma once
#include <cstdint>
#include "EBoneGetterSetterMode.hpp"
#include "FCachedRigElement.hpp"
#include "FRigUnitMutable.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetBoneTranslation : public FRigUnitMutable {
    FName Bone; // 0x68
    FVector Translation; // 0x70
    EBoneGetterSetterMode Space; // 0x7c
    char pad_7d[0x3];
    float weight; // 0x80
    bool bPropagateToChildren; // 0x84
    char pad_85[0x3];
    FCachedRigElement CachedBone; // 0x88
    char pad_9c[0x4];
}; // Size: 0xa0
#pragma pack(pop)
