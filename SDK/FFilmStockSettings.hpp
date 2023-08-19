#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FFilmStockSettings {
    float Slope; // 0x0
    float Toe; // 0x4
    float Shoulder; // 0x8
    float BlackClip; // 0xc
    float WhiteClip; // 0x10
}; // Size: 0x14
#pragma pack(pop)
