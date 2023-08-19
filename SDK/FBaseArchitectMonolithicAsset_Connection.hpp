#pragma once
#include <cstdint>
#include "FBaseArchitectAsset_Connection.hpp"
#include "FBaseArchitectMonolithicAsset_AssetProxy.hpp"
#include "FGameplayTagContainer.hpp"
#pragma pack(push, 1)
struct FBaseArchitectMonolithicAsset_Connection : public FBaseArchitectAsset_Connection {
    char pad_1[0x1f];
    TArray<FBaseArchitectMonolithicAsset_AssetProxy> AssetProxies; // 0x20
}; // Size: 0x30
#pragma pack(pop)
