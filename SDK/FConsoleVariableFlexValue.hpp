#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FConsoleVariableFlexValue {
    int32_t Integer; // 0x0
    float float; // 0x4
    FString String; // 0x8
    uint8_t bValidInteger : 1; // 0x18
    uint8_t bValidFloat : 1; // 0x18
    uint8_t bValidString : 1; // 0x18
    uint8_t pad_bitfield_18_3 : 5;
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
