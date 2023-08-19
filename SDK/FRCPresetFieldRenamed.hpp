#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRCPresetFieldRenamed {
    FName OldFieldLabel; // 0x0
    FName NewFieldLabel; // 0x8
}; // Size: 0x10
#pragma pack(pop)
