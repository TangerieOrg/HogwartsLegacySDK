#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSubtitleCue {
    char pad_0[0x18];
    float Time; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
