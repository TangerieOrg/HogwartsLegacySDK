#pragma once
#include <cstdint>
#include "FPrimaryAssetType.hpp"
#pragma pack(push, 1)
struct FPrimaryAssetId {
    FPrimaryAssetType PrimaryAssetType; // 0x0
    FName PrimaryAssetName; // 0x8
}; // Size: 0x10
#pragma pack(pop)
