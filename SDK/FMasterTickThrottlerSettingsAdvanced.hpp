#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMasterTickThrottlerSettingsAdvanced {
    uint8_t bUseXYDistance : 1; // 0x0
    uint8_t bResponsiveIntervalChanges : 1; // 0x0
    uint8_t bThrottleInEditor : 1; // 0x0
    uint8_t pad_bitfield_0_3 : 5;
}; // Size: 0x1
#pragma pack(pop)
