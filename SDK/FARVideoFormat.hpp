#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FARVideoFormat {
    int32_t FPS; // 0x0
    int32_t Width; // 0x4
    int32_t Height; // 0x8
}; // Size: 0xc
#pragma pack(pop)
