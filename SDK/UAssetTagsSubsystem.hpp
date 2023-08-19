#pragma once
#include <cstdint>
#include "FAssetData.hpp"
#include "UEngineSubsystem.hpp"
class UObject;
#pragma pack(push, 1)
class UAssetTagsSubsystem : public UEngineSubsystem {
public:
    static UAssetTagsSubsystem* StaticClass();
    TArray<FName> GetCollectionsContainingAssetPtr(UObject* AssetPtr);
    TArray<FName> GetCollectionsContainingAssetData(FAssetData& AssetData);
    TArray<FName> GetCollectionsContainingAsset(FName AssetPathName);
    TArray<FName> GetCollections();
    TArray<FAssetData> GetAssetsInCollection(FName Name);
    bool CollectionExists(FName Name);
}; // Size: 0x30
#pragma pack(pop)
