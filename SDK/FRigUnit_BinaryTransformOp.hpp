#pragma once
#include <cstdint>
#include "FRigUnit.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_BinaryTransformOp : public FRigUnit {
    char pad_8[0x8];
    FTransform Argument0; // 0x10
    FTransform Argument1; // 0x40
    FTransform Result; // 0x70
}; // Size: 0xa0
#pragma pack(pop)
