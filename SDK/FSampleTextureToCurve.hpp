#pragma once
#include <cstdint>
#include "ESampleTextureToColorNormalizeMode.hpp"
#include "ESampleTextureToCurveAlphaChannel.hpp"
#include "ESampleTextureToCurveType.hpp"
#pragma pack(push, 1)
struct FSampleTextureToCurve {
    ESampleTextureToCurveType Type; // 0x0
    char pad_1[0x3];
    float StartUV; // 0x4
    float EndUV; // 0x8
    float OtherCoordBase; // 0xc
    float CurveStartT; // 0x10
    float CurveEndT; // 0x14
    ESampleTextureToColorNormalizeMode ColorNormalize; // 0x18
    ESampleTextureToColorNormalizeMode CurveNormalize; // 0x19
    char pad_1a[0x2];
    float Desaturate; // 0x1c
    int32_t QuantizeColorsBits; // 0x20
    float ColorScale; // 0x24
    ESampleTextureToCurveAlphaChannel AlphaChannel; // 0x28
    char pad_29[0x3];
    float FixedAlpha; // 0x2c
    ESampleTextureToColorNormalizeMode AlphaIntensity; // 0x30
    char pad_31[0x3];
    float AlphaScale; // 0x34
    float CurveErrorTolerancePercent; // 0x38
    bool bCubicKeys; // 0x3c
    bool bUseCurveErrorTolerance; // 0x3d
    bool bUseColorNormalize; // 0x3e
    bool bUseCurveNormalize; // 0x3f
    bool bUseDesaturate; // 0x40
    bool bUseQuantizeColors; // 0x41
    bool bUseColorScale; // 0x42
    bool bDoAlpha; // 0x43
    bool bOverrideAlphaIntensity; // 0x44
    bool bUseAlphaScale; // 0x45
    char pad_46[0x2];
}; // Size: 0x48
#pragma pack(pop)
