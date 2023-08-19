#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDistributionLookupTable {
    float TimeScale; // 0x0
    float TimeBias; // 0x4
    TArray<float> Values; // 0x8
    uint8_t Op; // 0x18
    uint8_t EntryCount; // 0x19
    uint8_t EntryStride; // 0x1a
    uint8_t SubEntryStride; // 0x1b
    uint8_t LockFlag; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
