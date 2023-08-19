#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnit_BinaryQuaternionOp : public FRigUnit {
    char pad_8[0x8];
    FQuat Argument0; // 0x10
    FQuat Argument1; // 0x20
    FQuat Result; // 0x30
}; // Size: 0x40
#pragma pack(pop)
