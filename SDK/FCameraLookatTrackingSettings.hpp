#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCameraLookatTrackingSettings {
    uint8_t bEnableLookAtTracking : 1; // 0x0
    uint8_t bDrawDebugLookAtTrackingPosition : 1; // 0x0
    uint8_t pad_bitfield_0_2 : 6;
    char pad_1[0x3];
    float LookAtTrackingInterpSpeed; // 0x4
    char pad_8[0x38];
    FVector RelativeOffset; // 0x40
    uint8_t bAllowRoll : 1; // 0x4c
    uint8_t pad_bitfield_4c_1 : 7;
    char pad_4d[0x3];
}; // Size: 0x50
#pragma pack(pop)
