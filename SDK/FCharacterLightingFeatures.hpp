#pragma once
#include <cstdint>
#include "FCharacterLightingFeaturesOptions.hpp"
#pragma pack(push, 1)
struct FCharacterLightingFeatures {
    FCharacterLightingFeaturesOptions OPTIONS; // 0x0
    char pad_2[0x56];
    TArray<void*> PendingCharacters; // 0x58
    char pad_68[0x50];
}; // Size: 0xb8
#pragma pack(pop)
