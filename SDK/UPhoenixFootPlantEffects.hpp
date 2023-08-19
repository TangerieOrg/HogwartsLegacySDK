#pragma once
#include <cstdint>
#include "EFootprintTypes.hpp"
#include "FVector2D.hpp"
#include "UFootPlantEffects.hpp"
#pragma pack(push, 1)
class UPhoenixFootPlantEffects : public UFootPlantEffects {
public:
    float VfxRadius; // 0x50
    EFootprintTypes FootprintType; // 0x54
    char pad_55[0x3];
    float FootOffsetZ; // 0x58
    float FootprintScale; // 0x5c
    float ScaleMultiplier; // 0x60
    float FemaleFootprintScaleAdjustment; // 0x64
    FVector2D FootprintScaleVariationRange; // 0x68
    char pad_70[0x8];
    static UPhoenixFootPlantEffects* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
