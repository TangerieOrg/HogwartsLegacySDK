#pragma once
#include <cstdint>
#include "FCreatureFemaleVariationSettings.hpp"
#include "FCreatureMaleVariationSettings.hpp"
#include "FCreatureMeshVariation.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UCreatureVariationDataAsset : public UDataAsset {
public:
    bool bUseMeshVariations; // 0x30
    char pad_31[0x7];
    TArray<FCreatureMeshVariation> MeshVariationSettings; // 0x38
    bool bSwapMaterialsForFemale; // 0x48
    char pad_49[0x7];
    FCreatureMaleVariationSettings MaleVariationSettings; // 0x50
    FCreatureFemaleVariationSettings FemaleVariationSettings; // 0xb0
    static UCreatureVariationDataAsset* StaticClass();
}; // Size: 0x198
#pragma pack(pop)
