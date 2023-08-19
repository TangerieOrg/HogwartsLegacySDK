#pragma once
#include <cstdint>
#include "FMeshUVChannelInfo.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
struct FStaticMaterial {
    UMaterialInterface* MaterialInterface; // 0x0
    FName MaterialSlotName; // 0x8
    FName ImportedMaterialSlotName; // 0x10
    FMeshUVChannelInfo UVChannelData; // 0x18
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
