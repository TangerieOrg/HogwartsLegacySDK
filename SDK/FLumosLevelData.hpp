#pragma once
#include <cstdint>
#include "FSpellLevelData.hpp"
#pragma pack(push, 1)
struct FLumosLevelData : public FSpellLevelData {
    char pad_1[0x3];
    float Radius; // 0x4
    float Intensity; // 0x8
    float MinDistance; // 0xc
}; // Size: 0x10
#pragma pack(pop)
