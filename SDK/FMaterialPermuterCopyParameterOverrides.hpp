#pragma once
#include <cstdint>
#include "FMaterialPermuterCopyParameterOverride.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterCopyParameterOverrides {
    TArray<FMaterialPermuterCopyParameterOverride> Groups; // 0x0
    TArray<FMaterialPermuterCopyParameterOverride> Permutations; // 0x10
}; // Size: 0x20
#pragma pack(pop)
