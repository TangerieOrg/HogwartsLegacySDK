#pragma once
#include <cstdint>
#include "EMaterialPermuterParameterCopy.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterCopyParameterOverride {
    FName Key; // 0x0
    TArray<void*> SpecificMaterials; // 0x8
    EMaterialPermuterParameterCopy ParameterCopy; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
