#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRecipeIngredientDefinition {
    FName IngredientName; // 0x0
    int32_t Quantity; // 0x8
}; // Size: 0xc
#pragma pack(pop)
