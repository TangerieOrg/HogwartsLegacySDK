#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMapTierDescription {
    bool Dot; // 0x0
    bool Icon; // 0x1
    bool Name; // 0x2
    char pad_3[0x1];
    float Scale; // 0x4
    bool ShowOverFogOfWar; // 0x8
    bool AllowHoverOverFogOfWar; // 0x9
    bool AllowHover; // 0xa
    char pad_b[0x1];
}; // Size: 0xc
#pragma pack(pop)
