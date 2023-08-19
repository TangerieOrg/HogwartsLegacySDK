#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNiagaraPlatformSetConflictEntry {
    FName ProfileName; // 0x0
    int32_t QualityLevelMask; // 0x8
}; // Size: 0xc
#pragma pack(pop)
