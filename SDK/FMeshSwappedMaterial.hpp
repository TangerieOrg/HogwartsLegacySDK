#pragma once
#include <cstdint>
#include "FCachedMIDParameters.hpp"
class UMaterialInterface;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
struct FMeshSwappedMaterial {
    FCachedMIDParameters CachedParameters; // 0x0
    UMaterialInterface* OriginalMaterial; // 0x20
    UMaterialInstanceDynamic* SwapMID; // 0x28
    int16_t Index; // 0x30
    int16_t flags; // 0x32
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
