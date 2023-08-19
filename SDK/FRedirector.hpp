#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRedirector {
    FName OldName; // 0x0
    FName NewName; // 0x8
}; // Size: 0x10
#pragma pack(pop)
