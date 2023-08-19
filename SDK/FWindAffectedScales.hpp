#pragma once
#include <cstdint>
#include "FWindAffectedScale.hpp"
#pragma pack(push, 1)
struct FWindAffectedScales {
    FWindAffectedScale ScaleX; // 0x0
    FWindAffectedScale ScaleY; // 0x10
    FWindAffectedScale ScaleZ; // 0x20
    uint8_t bUseScaleX : 1; // 0x30
    uint8_t bUseScaleY : 1; // 0x30
    uint8_t bUseScaleZ : 1; // 0x30
    uint8_t pad_bitfield_30_3 : 5;
    char pad_31[0x3];
}; // Size: 0x34
#pragma pack(pop)
