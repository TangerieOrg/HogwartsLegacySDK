#pragma once
#include <cstdint>
#include "FClothAssetLODCookedData.hpp"
#pragma pack(push, 1)
struct FClothingAssetNvCookedData {
    TArray<FClothAssetLODCookedData> LODsCookedData; // 0x0
}; // Size: 0x10
#pragma pack(pop)
