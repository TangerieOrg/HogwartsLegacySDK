#pragma once
#include <cstdint>
#include "EBoneGetterSetterMode.hpp"
#include "FCachedRigElement.hpp"
#include "FRigUnit.hpp"
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FRigUnit_GetControlRotator : public FRigUnit {
    FName Control; // 0x8
    EBoneGetterSetterMode Space; // 0x10
    char pad_11[0x3];
    FRotator Rotator; // 0x14
    FRotator Minimum; // 0x20
    FRotator Maximum; // 0x2c
    FCachedRigElement CachedControlIndex; // 0x38
    char pad_4c[0x4];
}; // Size: 0x50
#pragma pack(pop)
