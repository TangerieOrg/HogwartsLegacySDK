#pragma once
#include <cstdint>
#include "EVectorNoiseFunction.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionVectorNoise : public UMaterialExpression {
public:
    FExpressionInput Position; // 0x40
    EVectorNoiseFunction NoiseFunction; // 0x54
    char pad_55[0x3];
    int32_t Quality; // 0x58
    uint8_t bTiling : 1; // 0x5c
    uint8_t pad_bitfield_5c_1 : 7;
    char pad_5d[0x3];
    uint32_t TileSize; // 0x60
    char pad_64[0x4];
    static UMaterialExpressionVectorNoise* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
