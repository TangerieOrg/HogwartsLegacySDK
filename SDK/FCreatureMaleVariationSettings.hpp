#pragma once
#include <cstdint>
#include "FCreatureVariation.hpp"
#pragma pack(push, 1)
struct FCreatureMaleVariationSettings {
    char pad_0[0x50];
    TArray<FCreatureVariation> ColorVariations; // 0x50
}; // Size: 0x60
#pragma pack(pop)
