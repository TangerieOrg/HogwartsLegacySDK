#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FTimelineEventEntry {
    float Time; // 0x0
    char pad_4[0x10];
}; // Size: 0x14
#pragma pack(pop)
