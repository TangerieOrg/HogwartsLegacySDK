#pragma once
#include <cstdint>
#include "EBoneGetterSetterMode.hpp"
#include "FCachedRigElement.hpp"
#include "FRigUnitMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetControlTransform : public FRigUnitMutable {
    FName Control; // 0x68
    float weight; // 0x70
    char pad_74[0xc];
    FTransform Transform; // 0x80
    EBoneGetterSetterMode Space; // 0xb0
    char pad_b1[0x3];
    FCachedRigElement CachedControlIndex; // 0xb4
    char pad_c8[0x8];
}; // Size: 0xd0
#pragma pack(pop)
