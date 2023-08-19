#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNiagaraDeviceProfileStateEntry {
    FName ProfileName; // 0x0
    uint32_t QualityLevelMask; // 0x8
    uint32_t SetQualityLevelMask; // 0xc
}; // Size: 0x10
#pragma pack(pop)
