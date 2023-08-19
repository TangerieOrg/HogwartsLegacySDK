#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBeamModifierOptions {
    uint8_t bModify : 1; // 0x0
    uint8_t bScale : 1; // 0x0
    uint8_t bLock : 1; // 0x0
    uint8_t pad_bitfield_0_3 : 5;
    char pad_1[0x3];
}; // Size: 0x4
#pragma pack(pop)
