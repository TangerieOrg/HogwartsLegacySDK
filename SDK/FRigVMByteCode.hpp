#pragma once
#include <cstdint>
#include "FRigVMByteCodeEntry.hpp"
#pragma pack(push, 1)
struct FRigVMByteCode {
    TArray<uint8_t> ByteCode; // 0x0
    int32_t NumInstructions; // 0x10
    char pad_14[0x4];
    TArray<FRigVMByteCodeEntry> Entries; // 0x18
    char pad_28[0x8];
}; // Size: 0x30
#pragma pack(pop)
