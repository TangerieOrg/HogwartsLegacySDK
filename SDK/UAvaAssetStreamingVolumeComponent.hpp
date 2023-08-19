#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UAvaStreamingVolumeComponentBase.hpp"
class AActor;
#pragma pack(push, 1)
class UAvaAssetStreamingVolumeComponent : public UAvaStreamingVolumeComponentBase {
public:
    char pad_260[0x28];
    AActor* AssetOwner; // 0x288
    static UAvaAssetStreamingVolumeComponent* StaticClass();
    void SetAssetOwner(AActor* NewOwner);
    TArray<FTransform> GetAssetTransforms();
    TArray<void*> GetAssetsToStream();
    AActor* GetAssetOwner();
}; // Size: 0x290
#pragma pack(pop)
