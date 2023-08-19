#pragma once
#include <cstdint>
#include "FBaseArchitectAsset_Connection.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPreLoadAssetArchitectAsset_AssetProxy.hpp"
#pragma pack(push, 1)
struct FPreLoadAssetArchitectAsset_Connection : public FBaseArchitectAsset_Connection {
    char pad_1[0x1f];
    TArray<FPreLoadAssetArchitectAsset_AssetProxy> AssetProxies; // 0x20
}; // Size: 0x30
#pragma pack(pop)
