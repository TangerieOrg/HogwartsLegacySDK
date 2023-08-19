#pragma once
#include <cstdint>
#include "FMaterialPermuterInstanceHandCraftedUIPair.hpp"
#include "FMaterialPermuterKeyProperty.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterInstanceHandCraftedUISet {
    FMaterialPermuterKeyProperty Key; // 0x0
    TArray<FMaterialPermuterInstanceHandCraftedUIPair> Pairs; // 0x10
}; // Size: 0x20
#pragma pack(pop)
