#pragma once
#include <cstdint>
#include "ENoiseFunction.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionNoise : public UMaterialExpression {
public:
    FExpressionInput Position; // 0x40
    FExpressionInput FilterWidth; // 0x54
    float Scale; // 0x68
    int32_t Quality; // 0x6c
    ENoiseFunction NoiseFunction; // 0x70
    char pad_71[0x3];
    uint8_t bTurbulence : 1; // 0x74
    uint8_t pad_bitfield_74_1 : 7;
    char pad_75[0x3];
    int32_t Levels; // 0x78
    float OutputMin; // 0x7c
    float OutputMax; // 0x80
    float LevelScale; // 0x84
    uint8_t bTiling : 1; // 0x88
    uint8_t pad_bitfield_88_1 : 7;
    char pad_89[0x3];
    uint32_t RepeatSize; // 0x8c
    static UMaterialExpressionNoise* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
