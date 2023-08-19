#pragma once
#include <cstdint>
#include "FCollectionReference.hpp"
#include "FPrimaryAssetRules.hpp"
#include "UPrimaryDataAsset.hpp"
#pragma pack(push, 1)
class UPrimaryAssetLabel : public UPrimaryDataAsset {
public:
    FPrimaryAssetRules Rules; // 0x30
    uint8_t bLabelAssetsInMyDirectory : 1; // 0x3c
    uint8_t bIsRuntimeLabel : 1; // 0x3c
    uint8_t pad_bitfield_3c_2 : 6;
    char pad_3d[0x3];
    TArray<void*> ExplicitAssets; // 0x40
    TArray<void*> ExplicitBlueprints; // 0x50
    FCollectionReference AssetCollection; // 0x60
    static UPrimaryAssetLabel* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
