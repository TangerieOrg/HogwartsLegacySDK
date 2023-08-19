#pragma once
#include <cstdint>
#include "FVector4.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
struct FInstancedStaticMeshInstanceData {
    char pad_0[0x20];
    TArray<UMaterialInterface*> wOverrideMaterials; // 0x20
    FVector4 wCustomData[4]; // 0x30
}; // Size: 0x70
#pragma pack(pop)
