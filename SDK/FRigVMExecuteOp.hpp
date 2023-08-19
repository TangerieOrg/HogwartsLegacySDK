#pragma once
#include <cstdint>
#include "FRigVMBaseOp.hpp"
#pragma pack(push, 1)
struct FRigVMExecuteOp : public FRigVMBaseOp {
    char pad_1[0x3];
}; // Size: 0x4
#pragma pack(pop)
