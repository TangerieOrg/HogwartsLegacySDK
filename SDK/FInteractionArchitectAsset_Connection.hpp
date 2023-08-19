#pragma once
#include <cstdint>
#include "FBaseArchitectAsset_Connection.hpp"
#include "FInteractionArchitectAsset_AssetProxy.hpp"
#include "FInteractionArchitectAsset_KeyValueGroup.hpp"
#pragma pack(push, 1)
struct FInteractionArchitectAsset_Connection : public FBaseArchitectAsset_Connection {
    char pad_1[0xf];
    TArray<FInteractionArchitectAsset_AssetProxy> AssetProxies; // 0x10
    bool bIsAdditive; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
