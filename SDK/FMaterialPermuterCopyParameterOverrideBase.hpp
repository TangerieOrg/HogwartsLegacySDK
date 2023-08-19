#pragma once
#include <cstdint>
#include "EMaterialPermuterParameterCopy.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterCopyParameterOverrideBase {
    char pad_0[0x8];
    EMaterialPermuterParameterCopy ParameterCopy; // 0x8
    char pad_9[0x7];
    TArray<void*> SpecificMaterials; // 0x10
    bool bOnlySpecificMaterials; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
