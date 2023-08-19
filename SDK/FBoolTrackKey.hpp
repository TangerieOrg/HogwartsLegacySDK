#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBoolTrackKey {
    float Time; // 0x0
    uint8_t Value : 1; // 0x4
    uint8_t pad_bitfield_4_1 : 7;
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
