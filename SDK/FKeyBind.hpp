#pragma once
#include <cstdint>
#include "FKey.hpp"
#pragma pack(push, 1)
struct FKeyBind {
    FKey Key; // 0x0
    FString Command; // 0x18
    uint8_t Control : 1; // 0x28
    uint8_t Shift : 1; // 0x28
    uint8_t Alt : 1; // 0x28
    uint8_t Cmd : 1; // 0x28
    uint8_t bIgnoreCtrl : 1; // 0x28
    uint8_t bIgnoreShift : 1; // 0x28
    uint8_t bIgnoreAlt : 1; // 0x28
    uint8_t bIgnoreCmd : 1; // 0x28
    uint8_t bDisabled : 1; // 0x29
    uint8_t pad_bitfield_29_1 : 7;
    char pad_2a[0x6];
}; // Size: 0x30
#pragma pack(pop)
