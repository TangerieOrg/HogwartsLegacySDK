#pragma once
#include <cstdint>
#include "FKey.hpp"
#pragma pack(push, 1)
struct FInputActionKeyMapping {
    FName ActionName; // 0x0
    uint8_t bShift : 1; // 0x8
    uint8_t bCtrl : 1; // 0x8
    uint8_t bAlt : 1; // 0x8
    uint8_t bCmd : 1; // 0x8
    uint8_t pad_bitfield_8_4 : 4;
    char pad_9[0x7];
    FKey Key; // 0x10
    FName GroupName; // 0x28
    int32_t SortIndex; // 0x30
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
