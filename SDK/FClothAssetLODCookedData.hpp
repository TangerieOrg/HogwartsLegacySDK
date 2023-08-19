#pragma once
#include <cstdint>
#include "FClothFabricCookedData.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#pragma pack(push, 1)
struct FClothAssetLODCookedData {
    TArray<FVector4> Px_RestPositions; // 0x0
    FClothFabricCookedData FabricData; // 0x10
    TArray<FVector> SkinnedVerts; // 0xa8
    TArray<FVector> SkinnedNormals; // 0xb8
}; // Size: 0xc8
#pragma pack(pop)
