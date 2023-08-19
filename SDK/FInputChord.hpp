#pragma once
#include <cstdint>
#include "FKey.hpp"
#pragma pack(push, 1)
struct FInputChord {
    FKey Key; // 0x0
    uint8_t bShift : 1; // 0x18
    uint8_t bCtrl : 1; // 0x18
    uint8_t bAlt : 1; // 0x18
    uint8_t bCmd : 1; // 0x18
    uint8_t pad_bitfield_18_4 : 4;
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
