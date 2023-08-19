#pragma once
#include <cstdint>
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnit_BinaryFloatOp : public FRigUnit {
    float Argument0; // 0x8
    float Argument1; // 0xc
    float Result; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
