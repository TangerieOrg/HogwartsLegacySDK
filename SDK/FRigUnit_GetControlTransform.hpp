#pragma once
#include <cstdint>
#include "EBoneGetterSetterMode.hpp"
#include "FCachedRigElement.hpp"
#include "FRigUnit.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_GetControlTransform : public FRigUnit {
    FName Control; // 0x8
    EBoneGetterSetterMode Space; // 0x10
    char pad_11[0xf];
    FTransform Transform; // 0x20
    FTransform Minimum; // 0x50
    FTransform Maximum; // 0x80
    FCachedRigElement CachedControlIndex; // 0xb0
    char pad_c4[0xc];
}; // Size: 0xd0
#pragma pack(pop)
