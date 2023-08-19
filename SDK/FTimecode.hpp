#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FTimecode {
    int32_t Hours; // 0x0
    int32_t Minutes; // 0x4
    int32_t Seconds; // 0x8
    int32_t Frames; // 0xc
    bool bDropFrameFormat; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
