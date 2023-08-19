#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#pragma pack(push, 1)
struct FMasterTickThrottlerTracker {
    FMasterTickThrottlerSettings Settings; // 0x0
    FDateTime LastKeepAlive; // 0x28
    uint8_t bDisableThrottling : 1; // 0x30
    uint8_t bHasKeepAliveInterface : 1; // 0x30
    uint8_t pad_bitfield_30_2 : 6;
    char pad_31[0x7];
}; // Size: 0x38
#pragma pack(pop)
