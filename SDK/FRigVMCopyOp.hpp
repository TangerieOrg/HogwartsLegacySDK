#pragma once
#include <cstdint>
#include "FRigVMBaseOp.hpp"
#pragma pack(push, 1)
struct FRigVMCopyOp : public FRigVMBaseOp {
    char pad_1[0xd];
}; // Size: 0xe
#pragma pack(pop)
