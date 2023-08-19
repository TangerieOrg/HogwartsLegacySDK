#pragma once
#include <cstdint>
#include "FMaterialPermuterCopyParameterOverrideBase.hpp"
#include "FMaterialPermuterGroupProperty.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterCopyParameterOverrideGroup : public FMaterialPermuterCopyParameterOverrideBase {
    FMaterialPermuterGroupProperty Group; // 0x28
}; // Size: 0x38
#pragma pack(pop)
