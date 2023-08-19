#pragma once
#include <cstdint>
#include "FRecipeIngredient.hpp"
#include "FTimespan.hpp"
#pragma pack(push, 1)
struct FBrewingRecipe {
    FName PotionID; // 0x0
    FName UICategory; // 0x8
    int32_t SortingIndex; // 0x10
    int32_t Yield; // 0x14
    TArray<FRecipeIngredient> Ingredients; // 0x18
    FTimespan TimeToBrew; // 0x28
    FName LockId; // 0x30
    char pad_38[0x8];
}; // Size: 0x40
#pragma pack(pop)
