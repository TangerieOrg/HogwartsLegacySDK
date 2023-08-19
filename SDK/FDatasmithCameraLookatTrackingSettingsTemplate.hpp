#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDatasmithCameraLookatTrackingSettingsTemplate {
    uint8_t bEnableLookAtTracking : 1; // 0x0
    uint8_t bAllowRoll : 1; // 0x0
    uint8_t pad_bitfield_0_2 : 6;
    char pad_1[0x2f];
}; // Size: 0x30
#pragma pack(pop)
