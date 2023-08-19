#pragma once
#include <cstdint>
#include "ETransformGetterType.hpp"
#include "ETransformSpaceMode.hpp"
#include "FRigUnitMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_GetJointTransform : public FRigUnitMutable {
    FName Joint; // 0x68
    ETransformGetterType Type; // 0x70
    ETransformSpaceMode TransformSpace; // 0x71
    char pad_72[0xe];
    FTransform BaseTransform; // 0x80
    FName BaseJoint; // 0xb0
    char pad_b8[0x8];
    FTransform Output; // 0xc0
}; // Size: 0xf0
#pragma pack(pop)
