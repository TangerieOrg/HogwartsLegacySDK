#pragma once
#include <cstdint>
#include "FCreatureVariation.hpp"
#pragma pack(push, 1)
struct FCreatureFemaleVariationSettings {
    bool bSwapMeshForFemale; // 0x0
    char pad_1[0x57];
    FCreatureVariation MaterialSwap; // 0x58
    TArray<FCreatureVariation> ColorVariations; // 0xd8
}; // Size: 0xe8
#pragma pack(pop)
