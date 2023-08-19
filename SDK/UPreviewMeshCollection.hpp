#pragma once
#include <cstdint>
#include "FPreviewMeshCollectionEntry.hpp"
#include "UDataAsset.hpp"
class USkeleton;
#pragma pack(push, 1)
class UPreviewMeshCollection : public UDataAsset {
public:
    char pad_30[0x8];
    USkeleton* Skeleton; // 0x38
    TArray<FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x40
    static UPreviewMeshCollection* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
