#pragma once
#include <cstdint>
#include "FSkinFXStandardParamsBounds.hpp"
#pragma pack(push, 1)
struct FSkinFXStandardParamsInitial {
    FName StartTime; // 0x0
    FName RandomSeed; // 0x8
    FName RandomUnitVector; // 0x10
    FSkinFXStandardParamsBounds Bounds; // 0x18
    uint8_t bStartTime : 1; // 0x5c
    uint8_t bRandomSeed : 1; // 0x5c
    uint8_t bRandomUnitVector : 1; // 0x5c
    uint8_t pad_bitfield_5c_3 : 5;
    char pad_5d[0x3];
}; // Size: 0x60
#pragma pack(pop)
