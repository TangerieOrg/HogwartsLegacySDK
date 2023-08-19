#pragma once
#include <cstdint>
#include "FMaterialPermuterCopyParameterOverrideBase.hpp"
#include "FMaterialPermuterPermutationProperty.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterCopyParameterOverridePermutation : public FMaterialPermuterCopyParameterOverrideBase {
    FMaterialPermuterPermutationProperty Permutation; // 0x28
}; // Size: 0x38
#pragma pack(pop)
