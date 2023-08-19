#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FOverlapResult {
    char pad_0[0x14];
    uint8_t bBlockingHit : 1; // 0x14
    uint8_t pad_bitfield_14_1 : 7;
    char pad_15[0x3];
}; // Size: 0x18
#pragma pack(pop)
