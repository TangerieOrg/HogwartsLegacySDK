#pragma once
#include <cstdint>
#include "UTexture2D.hpp"
class UCurveLinearColor;
#pragma pack(push, 1)
class UCurveLinearColorAtlas : public UTexture2D {
public:
    uint32_t TextureSize; // 0x1a0
    uint8_t bSquareResolution : 1; // 0x1a4
    uint8_t pad_bitfield_1a4_1 : 7;
    char pad_1a5[0x3];
    uint32_t TextureHeight; // 0x1a8
    char pad_1ac[0x4];
    TArray<UCurveLinearColor*> GradientCurves; // 0x1b0
    static UCurveLinearColorAtlas* StaticClass();
    bool GetCurvePosition(UCurveLinearColor* InCurve, float& Position);
}; // Size: 0x1c0
#pragma pack(pop)
