#pragma once
#include <cstdint>
#include "FVector2D.hpp"
class UTexture;
#pragma pack(push, 1)
struct FExpHeightFogVolumetricFogDensityMapParametersOverride {
    uint8_t bOverride_FalloffStartMap : 1; // 0x0
    uint8_t bOverride_DensityMultiplierMap : 1; // 0x0
    uint8_t bOverride_DensityMapOrigin : 1; // 0x0
    uint8_t bOverride_DensityMapSize : 1; // 0x0
    uint8_t bOverride_DensityMapFalloffLength : 1; // 0x0
    uint8_t bOverride_DensityMapFalloffStartRange : 1; // 0x0
    uint8_t bOverride_DensityMapDensityRange : 1; // 0x0
    uint8_t pad_bitfield_0_7 : 1;
    char pad_1[0x7];
    UTexture* FalloffStartMap; // 0x8
    UTexture* DensityMultiplierMap; // 0x10
    FVector2D DensityMapOrigin; // 0x18
    FVector2D DensityMapSize; // 0x20
    float DensityMapFalloffLength; // 0x28
    FVector2D DensityMapFalloffStartRange; // 0x2c
    FVector2D DensityMapDensityRange; // 0x34
    char pad_3c[0x4];
}; // Size: 0x40
#pragma pack(pop)
