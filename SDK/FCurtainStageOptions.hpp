#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCurtainStageOptions {
    uint8_t Spinner : 1; // 0x0
    uint8_t LoadingText : 1; // 0x0
    uint8_t StaticImage : 1; // 0x0
    uint8_t Tips : 1; // 0x0
    uint8_t ProgressBar : 1; // 0x0
    uint8_t pad_bitfield_0_5 : 3;
    char pad_1[0x3];
}; // Size: 0x4
#pragma pack(pop)
