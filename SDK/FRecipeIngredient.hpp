#pragma once
#include <cstdint>
#include "FRecipeIngredientDefinition.hpp"
#pragma pack(push, 1)
struct FRecipeIngredient {
    FRecipeIngredientDefinition RecipeDefinition; // 0x0
    int32_t CurrentlyOwnedQuantity; // 0xc
}; // Size: 0x10
#pragma pack(pop)
