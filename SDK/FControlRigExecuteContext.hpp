#pragma once
#include <cstdint>
#include "FRigVMExecuteContext.hpp"
#pragma pack(push, 1)
struct FControlRigExecuteContext : public FRigVMExecuteContext {
    char pad_58[0x8];
}; // Size: 0x60
#pragma pack(pop)
