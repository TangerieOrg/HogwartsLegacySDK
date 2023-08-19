#pragma once
#include <cstdint>
#include "FRigVMBaseOp.hpp"
#pragma pack(push, 1)
struct FRigVMUnaryOp : public FRigVMBaseOp {
    char pad_1[0x7];
}; // Size: 0x8
#pragma pack(pop)
