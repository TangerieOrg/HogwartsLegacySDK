#pragma once
#include <cstdint>
#include "FMaterialPermuterCopyParameterOverrideGroup.hpp"
#include "FMaterialPermuterCopyParameterOverridePermutation.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterCopyParameterOverridesSetup {
    TArray<FMaterialPermuterCopyParameterOverrideGroup> GroupOverrides; // 0x0
    TArray<FMaterialPermuterCopyParameterOverridePermutation> PermutationOverrides; // 0x10
}; // Size: 0x20
#pragma pack(pop)
