#pragma once
#include <cstdint>
#include "FMeshUVChannelInfo.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
struct FSkeletalMaterial {
    UMaterialInterface* MaterialInterface; // 0x0
    FName MaterialSlotName; // 0x8
    FMeshUVChannelInfo UVChannelData; // 0x10
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
