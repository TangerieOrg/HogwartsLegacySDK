#pragma once
#include <cstdint>
#include "FAssetBundleEntry.hpp"
#pragma pack(push, 1)
struct FAssetBundleData {
    TArray<FAssetBundleEntry> Bundles; // 0x0
}; // Size: 0x10
#pragma pack(pop)
