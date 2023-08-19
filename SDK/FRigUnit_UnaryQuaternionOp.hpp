#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnit_UnaryQuaternionOp : public FRigUnit {
    char pad_8[0x8];
    FQuat Argument; // 0x10
    FQuat Result; // 0x20
}; // Size: 0x30
#pragma pack(pop)
