#pragma once
#include <cstdint>
#include "EBoneGetterSetterMode.hpp"
#include "FCachedRigElement.hpp"
#include "FRigUnitMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetControlOffset : public FRigUnitMutable {
    FName Control; // 0x68
    FTransform Offset; // 0x70
    EBoneGetterSetterMode Space; // 0xa0
    char pad_a1[0x3];
    FCachedRigElement CachedControlIndex; // 0xa4
    char pad_b8[0x8];
}; // Size: 0xc0
#pragma pack(pop)
