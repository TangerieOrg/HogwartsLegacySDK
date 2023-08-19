#pragma once
#include <cstdint>
#include "FMaterialSwapMeshTagRules.hpp"
#include "FMaterialSwapMeshTypeRules.hpp"
#include "FMaterialSwapObjectRules.hpp"
#pragma pack(push, 1)
struct FMaterialSwapMeshRules {
    FMaterialSwapObjectRules ObjectFilter; // 0x0
    FMaterialSwapMeshTypeRules TypeFilter; // 0x20
    char pad_29[0x7];
    FMaterialSwapMeshTagRules TagFilter; // 0x30
}; // Size: 0x48
#pragma pack(pop)
