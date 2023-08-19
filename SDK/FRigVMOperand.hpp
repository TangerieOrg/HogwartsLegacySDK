#pragma once
#include <cstdint>
#include "ERigVMMemoryType.hpp"
#pragma pack(push, 1)
struct FRigVMOperand {
    ERigVMMemoryType MemoryType; // 0x0
    char pad_1[0x1];
    uint16_t RegisterIndex; // 0x2
    uint16_t RegisterOffset; // 0x4
}; // Size: 0x6
#pragma pack(pop)
