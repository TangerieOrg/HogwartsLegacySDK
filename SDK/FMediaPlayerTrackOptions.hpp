#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMediaPlayerTrackOptions {
    int32_t Audio; // 0x0
    int32_t Caption; // 0x4
    int32_t MetaData; // 0x8
    int32_t Script; // 0xc
    int32_t Subtitle; // 0x10
    int32_t Text; // 0x14
    int32_t Video; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
