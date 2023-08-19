#pragma once
#include <cstdint>
#include "FVector2D.hpp"
class UTexture;
#pragma pack(push, 1)
struct FExpHeightFogVolumetricFogDensityMapParameters {
    UTexture* FalloffStartMap; // 0x0
    UTexture* DensityMultiplierMap; // 0x8
    FVector2D DensityMapOrigin; // 0x10
    FVector2D DensityMapSize; // 0x18
    float DensityMapFalloffLength; // 0x20
    FVector2D DensityMapFalloffStartRange; // 0x24
    FVector2D DensityMapDensityRange; // 0x2c
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
