#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAudioQualitySettings {
    char pad_0[0x18];
    int32_t MaxChannels; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
