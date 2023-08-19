#pragma once
#include <cstdint>
#include "AAvaStreamingVolumeSet.hpp"
#include "FTransform.hpp"
class AActor;
#pragma pack(push, 1)
class AAvaAssetStreamingVolumeSet : public AAvaStreamingVolumeSet {
public:
    TArray<void*> AssetsToStream; // 0x268
    char pad_278[0x20];
    AActor* AssetOwner; // 0x298
    static AAvaAssetStreamingVolumeSet* StaticClass();
    void SetAssetOwner(AActor* NewOwner);
    TArray<FTransform> GetAssetTransforms();
    TArray<void*> GetAssetsToStream();
    AActor* GetAssetOwner();
}; // Size: 0x2a0
#pragma pack(pop)
