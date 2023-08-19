#pragma once
#include <cstdint>
#include "FNiagaraPlatformSetConflictEntry.hpp"
#pragma pack(push, 1)
struct FNiagaraPlatformSetConflictInfo {
    int32_t SetAIndex; // 0x0
    int32_t SetBIndex; // 0x4
    TArray<FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8
}; // Size: 0x18
#pragma pack(pop)
