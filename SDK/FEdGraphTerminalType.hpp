#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEdGraphTerminalType {
    FName TerminalCategory; // 0x0
    FName TerminalSubCategory; // 0x8
    char pad_10[0x8];
    bool bTerminalIsConst; // 0x18
    bool bTerminalIsWeakPointer; // 0x19
    bool bTerminalIsUObjectWrapper; // 0x1a
    char pad_1b[0x1];
}; // Size: 0x1c
#pragma pack(pop)
