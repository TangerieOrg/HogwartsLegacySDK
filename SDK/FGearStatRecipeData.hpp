#pragma once
#include <cstdint>
#include "FRecipeIngredient.hpp"
#include "GearStatType.hpp"
#pragma pack(push, 1)
struct FGearStatRecipeData {
    GearStatType StatType; // 0x0
    char pad_1[0x3];
    int32_t Upgrade; // 0x4
    TArray<FRecipeIngredient> Ingredients; // 0x8
    bool bHasAllIngredients; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
