#pragma once
#include <cstdint>
#include "FRigVMUnaryOp.hpp"
#pragma pack(push, 1)
struct FRigVMJumpIfOp : public FRigVMUnaryOp {
    char pad_8[0x8];
}; // Size: 0x10
#pragma pack(pop)
