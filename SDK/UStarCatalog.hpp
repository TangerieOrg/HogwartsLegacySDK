#pragma once
#include <cstdint>
#include "FStar.hpp"
#include "FStarCatalogEntryConvert.hpp"
#include "FStarCatalogNameIDMap.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UStarCatalog : public UDataAsset {
public:
    FStarCatalogEntryConvert Convert; // 0x30
    FStarCatalogNameIDMap ConstellationIDMap; // 0x68
    FStarCatalogNameIDMap ExtraIDMap; // 0x78
    TArray<FStar> Stars; // 0x88
    int32_t TotalStars; // 0x98
    char pad_9c[0x4];
    static UStarCatalog* StaticClass();
    void ForceRebuild();
}; // Size: 0xa0
#pragma pack(pop)
