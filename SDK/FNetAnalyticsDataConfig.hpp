#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNetAnalyticsDataConfig {
    FName DataName; // 0x0
    bool bEnabled; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
