#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSwarmDebugOptions {
    uint8_t bDistributionEnabled : 1; // 0x0
    uint8_t bForceContentExport : 1; // 0x0
    uint8_t bInitialized : 1; // 0x0
    uint8_t pad_bitfield_0_3 : 5;
    char pad_1[0x3];
}; // Size: 0x4
#pragma pack(pop)
