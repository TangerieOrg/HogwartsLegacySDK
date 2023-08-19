#pragma once
#include <cstdint>
class UFXRule;
class UMaterialInterface;
#pragma pack(push, 1)
struct FModifyMaterials_MaterialOverride {
    TArray<UFXRule*> Rules; // 0x0
    UMaterialInterface* Material; // 0x10
}; // Size: 0x18
#pragma pack(pop)
