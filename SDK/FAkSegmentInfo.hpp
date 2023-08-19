#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAkSegmentInfo {
    int32_t CurrentPosition; // 0x0
    int32_t PreEntryDuration; // 0x4
    int32_t ActiveDuration; // 0x8
    int32_t PostExitDuration; // 0xc
    int32_t RemainingLookAheadTime; // 0x10
    float BeatDuration; // 0x14
    float BarDuration; // 0x18
    float GridDuration; // 0x1c
    float GridOffset; // 0x20
}; // Size: 0x24
#pragma pack(pop)
