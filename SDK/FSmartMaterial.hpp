#pragma once
#include <cstdint>
#include "FModifyMaterials_MaterialOverride.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
struct FSmartMaterial {
    UMaterialInterface* DefaultMaterial; // 0x0
    TArray<FModifyMaterials_MaterialOverride> MaterialOverrides; // 0x8
}; // Size: 0x18
#pragma pack(pop)
