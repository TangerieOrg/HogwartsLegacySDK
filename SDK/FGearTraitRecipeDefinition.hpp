#pragma once
#include <cstdint>
#include "FRecipeIngredientDefinition.hpp"
#pragma pack(push, 1)
struct FGearTraitRecipeDefinition {
    FName TraitID; // 0x0
    FName LockId; // 0x8
    char pad_10[0x8];
    TArray<FRecipeIngredientDefinition> Ingredients; // 0x18
    FName RarityTier; // 0x28
}; // Size: 0x30
#pragma pack(pop)
