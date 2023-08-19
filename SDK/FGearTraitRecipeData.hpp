#pragma once
#include <cstdint>
#include "FGearTraitRecipeDefinition.hpp"
#include "FRecipeIngredient.hpp"
#pragma pack(push, 1)
struct FGearTraitRecipeData {
    FGearTraitRecipeDefinition RecipeDefinition; // 0x0
    bool bIsUnlocked; // 0x30
    bool bHasAllIngredients; // 0x31
    char pad_32[0x6];
    TArray<FRecipeIngredient> Ingredients; // 0x38
}; // Size: 0x48
#pragma pack(pop)
