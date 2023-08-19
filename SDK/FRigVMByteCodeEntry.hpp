#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRigVMByteCodeEntry {
    FName Name; // 0x0
    int32_t InstructionIndex; // 0x8
}; // Size: 0xc
#pragma pack(pop)
