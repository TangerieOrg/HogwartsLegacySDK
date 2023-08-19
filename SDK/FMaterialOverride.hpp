#pragma once
#include <cstdint>
#include "FMeshRule.hpp"
#pragma pack(push, 1)
struct FMaterialOverride {
    TArray<FMeshRule> Rules; // 0x0
    char pad_10[0x50];
}; // Size: 0x60
#pragma pack(pop)
