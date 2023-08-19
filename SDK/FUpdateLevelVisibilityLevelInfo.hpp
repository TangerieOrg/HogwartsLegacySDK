#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FUpdateLevelVisibilityLevelInfo {
    FName PackageName; // 0x0
    FName Filename; // 0x8
    uint8_t bIsVisible : 1; // 0x10
    uint8_t pad_bitfield_10_1 : 7;
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
