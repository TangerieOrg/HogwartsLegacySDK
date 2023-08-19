#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FTTTrackId {
    int32_t TrackType; // 0x0
    int32_t TrackIndex; // 0x4
}; // Size: 0x8
#pragma pack(pop)
