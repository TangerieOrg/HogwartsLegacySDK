#pragma once
#include <cstdint>
#include "FMaterialPermuterLoadingStrategy.hpp"
#include "FMaterialPermuterMaterialAssetIndexEntry.hpp"
class UMaterialPermuterLoadingStrategiesAsset;
#pragma pack(push, 1)
struct FMaterialPermuterMaterialAssetIndex {
    UMaterialPermuterLoadingStrategiesAsset* LoadingStrategies; // 0x0
    FMaterialPermuterLoadingStrategy DefaultStrategy; // 0x8
    char pad_1c[0x4];
    TArray<FMaterialPermuterMaterialAssetIndexEntry> Assets; // 0x20
    int32_t OnAsset; // 0x30
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
