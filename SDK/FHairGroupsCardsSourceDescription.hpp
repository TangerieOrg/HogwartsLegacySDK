#pragma once
#include <cstdint>
#include "EHairCardsSourceType.hpp"
#include "FHairGroupCardsInfo.hpp"
#include "FHairGroupCardsTextures.hpp"
#include "FHairGroupsProceduralCards.hpp"
class UMaterialInterface;
class UStaticMesh;
#pragma pack(push, 1)
struct FHairGroupsCardsSourceDescription {
    UMaterialInterface* Material; // 0x0
    FName MaterialSlotName; // 0x8
    EHairCardsSourceType SourceType; // 0x10
    char pad_11[0x7];
    UStaticMesh* ProceduralMesh; // 0x18
    FString ProceduralMeshKey; // 0x20
    UStaticMesh* ImportedMesh; // 0x30
    FHairGroupsProceduralCards ProceduralSettings; // 0x38
    FHairGroupCardsTextures Textures; // 0x70
    int32_t GroupIndex; // 0xa0
    int32_t LODIndex; // 0xa4
    FHairGroupCardsInfo CardsInfo; // 0xa8
    FString ImportedMeshKey; // 0xb0
}; // Size: 0xc0
#pragma pack(pop)
