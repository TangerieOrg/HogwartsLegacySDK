#pragma once
#include <cstdint>
#include "FMaterialPermuterLoadingStrategy.hpp"
#include "FMaterialPermuterPermutationProperty.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterLoadingPermutationStrategy {
    FMaterialPermuterPermutationProperty Permutation; // 0x0
    FMaterialPermuterLoadingStrategy Strategy; // 0x10
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
