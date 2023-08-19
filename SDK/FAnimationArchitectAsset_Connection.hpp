#pragma once
#include <cstdint>
#include "FAnimationArchitectAsset_AssetProxy.hpp"
#include "FBaseArchitectAsset_Connection.hpp"
#include "FGameplayTagContainer.hpp"
#pragma pack(push, 1)
struct FAnimationArchitectAsset_Connection : public FBaseArchitectAsset_Connection {
    char pad_1[0x1f];
    TArray<FAnimationArchitectAsset_AssetProxy> AssetProxies; // 0x20
}; // Size: 0x30
#pragma pack(pop)
