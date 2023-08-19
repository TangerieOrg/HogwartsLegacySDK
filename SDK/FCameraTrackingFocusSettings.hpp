#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCameraTrackingFocusSettings {
    char pad_0[0x28];
    FVector RelativeOffset; // 0x28
    uint8_t bDrawDebugTrackingFocusPoint : 1; // 0x34
    uint8_t pad_bitfield_34_1 : 7;
    char pad_35[0x3];
}; // Size: 0x38
#pragma pack(pop)
