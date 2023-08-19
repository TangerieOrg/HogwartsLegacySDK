#pragma once
#include <cstdint>
#include "FVector4.hpp"
class UMaterialSwap;
#pragma pack(push, 1)
struct FMaterialSwapSphereSelectionMesh {
    UMaterialSwap* MaterialSwap; // 0x0
    double LastTouched; // 0x8
    FVector4 SwapSphereMaterialParameter; // 0x10
    bool bIsSwappable; // 0x20
    char pad_21[0xf];
}; // Size: 0x30
#pragma pack(pop)
