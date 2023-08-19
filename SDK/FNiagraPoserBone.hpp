#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FNiagraPoserBone {
    FName Name; // 0x0
    int32_t Index; // 0x8
    char pad_c[0x4];
    FTransform InitialTransform; // 0x10
    uint8_t bInitialHidden : 1; // 0x40
    uint8_t bHidden : 1; // 0x40
    uint8_t pad_bitfield_40_2 : 6;
    char pad_41[0xf];
}; // Size: 0x50
#pragma pack(pop)
