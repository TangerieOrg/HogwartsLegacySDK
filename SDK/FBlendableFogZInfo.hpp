#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBlendableFogZInfo {
    float BaseZ; // 0x0
    float EyeZ; // 0x4
    float PlayerZ; // 0x8
    float CurrentZ; // 0xc
    bool bEyeZValid; // 0x10
    bool bPlayerZValid; // 0x11
    char pad_12[0x2];
}; // Size: 0x14
#pragma pack(pop)
