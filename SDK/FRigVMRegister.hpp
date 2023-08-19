#pragma once
#include <cstdint>
#include "ERigVMRegisterType.hpp"
#pragma pack(push, 1)
struct FRigVMRegister {
    ERigVMRegisterType Type; // 0x0
    char pad_1[0x3];
    uint32_t ByteIndex; // 0x4
    uint16_t ElementSize; // 0x8
    uint16_t ElementCount; // 0xa
    uint16_t SliceCount; // 0xc
    uint8_t AlignmentBytes; // 0xe
    char pad_f[0x1];
    uint16_t TrailingBytes; // 0x10
    char pad_12[0x2];
    FName Name; // 0x14
    int32_t ScriptStructIndex; // 0x1c
    bool bIsArray; // 0x20
    bool bIsDynamic; // 0x21
    char pad_22[0x2];
}; // Size: 0x24
#pragma pack(pop)
