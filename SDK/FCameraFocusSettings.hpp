#pragma once
#include <cstdint>
#include "ECameraFocusMethod.hpp"
#include "FCameraTrackingFocusSettings.hpp"
#include "FColor.hpp"
#pragma pack(push, 1)
struct FCameraFocusSettings {
    ECameraFocusMethod FocusMethod; // 0x0
    char pad_1[0x3];
    float ManualFocusDistance; // 0x4
    FCameraTrackingFocusSettings TrackingFocusSettings; // 0x8
    uint8_t bDrawDebugFocusPlane : 1; // 0x40
    uint8_t pad_bitfield_40_1 : 7;
    char pad_41[0x3];
    FColor DebugFocusPlaneColor; // 0x44
    uint8_t bSmoothFocusChanges : 1; // 0x48
    uint8_t pad_bitfield_48_1 : 7;
    char pad_49[0x3];
    float FocusSmoothingInterpSpeed; // 0x4c
    float FocusOffset; // 0x50
    char pad_54[0x4];
}; // Size: 0x58
#pragma pack(pop)
