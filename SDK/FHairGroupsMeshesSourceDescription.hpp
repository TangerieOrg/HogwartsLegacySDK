#pragma once
#include <cstdint>
#include "FHairGroupCardsTextures.hpp"
class UMaterialInterface;
class UStaticMesh;
#pragma pack(push, 1)
struct FHairGroupsMeshesSourceDescription {
    UMaterialInterface* Material; // 0x0
    FName MaterialSlotName; // 0x8
    UStaticMesh* ImportedMesh; // 0x10
    FHairGroupCardsTextures Textures; // 0x18
    int32_t GroupIndex; // 0x48
    int32_t LODIndex; // 0x4c
    FString ImportedMeshKey; // 0x50
}; // Size: 0x60
#pragma pack(pop)
