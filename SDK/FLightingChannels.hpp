#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLightingChannels {
    uint8_t bChannel0 : 1; // 0x0
    uint8_t bChannel1 : 1; // 0x0
    uint8_t bChannel2 : 1; // 0x0
    uint8_t pad_bitfield_0_3 : 5;
}; // Size: 0x1
#pragma pack(pop)
