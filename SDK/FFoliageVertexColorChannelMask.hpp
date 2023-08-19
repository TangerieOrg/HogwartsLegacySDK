#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FFoliageVertexColorChannelMask {
    uint8_t UseMask : 1; // 0x0
    uint8_t pad_bitfield_0_1 : 7;
    char pad_1[0x3];
    float MaskThreshold; // 0x4
    uint8_t InvertMask : 1; // 0x8
    uint8_t pad_bitfield_8_1 : 7;
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
