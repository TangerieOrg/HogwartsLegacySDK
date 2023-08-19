#pragma once
#include <cstdint>
#include "FPerPlatformInt.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
struct FLandscapeComponentMaterialOverride {
    FPerPlatformInt LODIndex; // 0x0
    char pad_4[0x4];
    UMaterialInterface* Material; // 0x8
}; // Size: 0x10
#pragma pack(pop)
