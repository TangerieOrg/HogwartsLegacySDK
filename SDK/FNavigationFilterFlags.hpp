#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNavigationFilterFlags {
    uint8_t bNavFlag0 : 1; // 0x0
    uint8_t bNavFlag1 : 1; // 0x0
    uint8_t bNavFlag2 : 1; // 0x0
    uint8_t bNavFlag3 : 1; // 0x0
    uint8_t bNavFlag4 : 1; // 0x0
    uint8_t bNavFlag5 : 1; // 0x0
    uint8_t bNavFlag6 : 1; // 0x0
    uint8_t bNavFlag7 : 1; // 0x0
    uint8_t bNavFlag8 : 1; // 0x1
    uint8_t bNavFlag9 : 1; // 0x1
    uint8_t bNavFlag10 : 1; // 0x1
    uint8_t bNavFlag11 : 1; // 0x1
    uint8_t bNavFlag12 : 1; // 0x1
    uint8_t bNavFlag13 : 1; // 0x1
    uint8_t bNavFlag14 : 1; // 0x1
    uint8_t bNavFlag15 : 1; // 0x1
    char pad_2[0x2];
}; // Size: 0x4
#pragma pack(pop)
