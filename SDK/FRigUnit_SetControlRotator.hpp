#pragma once
#include <cstdint>
#include "EBoneGetterSetterMode.hpp"
#include "FCachedRigElement.hpp"
#include "FRigUnitMutable.hpp"
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetControlRotator : public FRigUnitMutable {
    FName Control; // 0x68
    float weight; // 0x70
    FRotator Rotator; // 0x74
    EBoneGetterSetterMode Space; // 0x80
    char pad_81[0x3];
    FCachedRigElement CachedControlIndex; // 0x84
}; // Size: 0x98
#pragma pack(pop)
