#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSourceEffectEQBand {
    float Frequency; // 0x0
    float Bandwidth; // 0x4
    float GainDb; // 0x8
    uint8_t bEnabled : 1; // 0xc
    uint8_t pad_bitfield_c_1 : 7;
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
