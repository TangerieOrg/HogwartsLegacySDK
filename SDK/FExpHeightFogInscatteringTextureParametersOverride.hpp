#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
class UTextureCube;
#pragma pack(push, 1)
struct FExpHeightFogInscatteringTextureParametersOverride {
    uint8_t bOverride_InscatteringColorCubemap : 1; // 0x0
    uint8_t bOverride_InscatteringColorCubemapAngle : 1; // 0x0
    uint8_t bOverride_InscatteringTextureTint : 1; // 0x0
    uint8_t bOverride_FullyDirectionalInscatteringColorDistance : 1; // 0x0
    uint8_t bOverride_NonDirectionalInscatteringColorDistance : 1; // 0x0
    uint8_t bOverride_bUseSkyLight : 1; // 0x0
    uint8_t bOverride_InscatteringColorCubemapFactor : 1; // 0x0
    uint8_t pad_bitfield_0_7 : 1;
    char pad_1[0x7];
    UTextureCube* InscatteringColorCubemap; // 0x8
    float InscatteringColorCubemapAngle; // 0x10
    FLinearColor InscatteringTextureTint; // 0x14
    float FullyDirectionalInscatteringColorDistance; // 0x24
    float NonDirectionalInscatteringColorDistance; // 0x28
    bool bUseSkyLight; // 0x2c
    char pad_2d[0x3];
    float InscatteringColorCubemapFactor; // 0x30
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
