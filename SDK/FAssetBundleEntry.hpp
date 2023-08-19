#pragma once
#include <cstdint>
#include "FSoftObjectPath.hpp"
#pragma pack(push, 1)
struct FAssetBundleEntry {
    FName BundleName; // 0x0
    TArray<FSoftObjectPath> BundleAssets; // 0x8
}; // Size: 0x18
#pragma pack(pop)
