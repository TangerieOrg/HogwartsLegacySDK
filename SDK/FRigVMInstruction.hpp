#pragma once
#include <cstdint>
#include "ERigVMOpCode.hpp"
#pragma pack(push, 1)
struct FRigVMInstruction {
    uint64_t ByteCodeIndex; // 0x0
    ERigVMOpCode OpCode; // 0x8
    uint8_t OperandAlignment; // 0x9
    char pad_a[0x6];
}; // Size: 0x10
#pragma pack(pop)
