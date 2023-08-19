#pragma once
#include <cstdint>
class UMaterialInterface;
class UCurveFloat;
#pragma pack(push, 1)
struct FMaterialSpriteElement {
    UMaterialInterface* Material; // 0x0
    UCurveFloat* DistanceToOpacityCurve; // 0x8
    uint8_t bSizeIsInScreenSpace : 1; // 0x10
    uint8_t pad_bitfield_10_1 : 7;
    char pad_11[0x3];
    float BaseSizeX; // 0x14
    float BaseSizeY; // 0x18
    float PivotOffsetX; // 0x1c
    float PivotOffsetY; // 0x20
    char pad_24[0x4];
    UCurveFloat* DistanceToSizeCurve; // 0x28
}; // Size: 0x30
#pragma pack(pop)
