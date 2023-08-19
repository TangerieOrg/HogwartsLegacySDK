#pragma once
#include <cstdint>
#include "EBoneGetterSetterMode.hpp"
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetMultiControlRotator_Entry {
    FName Control; // 0x0
    FRotator Rotator; // 0x8
    EBoneGetterSetterMode Space; // 0x14
    char pad_15[0x3];
}; // Size: 0x18
#pragma pack(pop)
