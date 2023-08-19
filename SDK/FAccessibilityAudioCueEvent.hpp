#pragma once
#include <cstdint>
#include "FMapIconEntry.hpp"
#pragma pack(push, 1)
struct FAccessibilityAudioCueEvent {
    TArray<FMapIconEntry> Icons; // 0x0
    char pad_10[0x20];
}; // Size: 0x30
#pragma pack(pop)
