#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
class UTextureCube;
#pragma pack(push, 1)
struct FExpHeightFogInscatteringTextureParameters {
    UTextureCube* InscatteringColorCubemap; // 0x0
    float InscatteringColorCubemapAngle; // 0x8
    FLinearColor InscatteringTextureTint; // 0xc
    float FullyDirectionalInscatteringColorDistance; // 0x1c
    float NonDirectionalInscatteringColorDistance; // 0x20
    bool bUseSkyLight; // 0x24
    char pad_25[0x3];
    float InscatteringColorCubemapFactor; // 0x28
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
