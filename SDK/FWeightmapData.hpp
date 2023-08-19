#pragma once
#include <cstdint>
#include "FWeightmapLayerAllocationInfo.hpp"
class UTexture2D;
class ULandscapeWeightmapUsage;
#pragma pack(push, 1)
struct FWeightmapData {
    TArray<UTexture2D*> Textures; // 0x0
    TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
    TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
}; // Size: 0x30
#pragma pack(pop)
