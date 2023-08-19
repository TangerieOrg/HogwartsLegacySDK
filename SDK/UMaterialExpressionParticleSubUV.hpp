#pragma once
#include <cstdint>
#include "UMaterialExpressionTextureSample.hpp"
#pragma pack(push, 1)
class UMaterialExpressionParticleSubUV : public UMaterialExpressionTextureSample {
public:
    uint8_t bBlend : 1; // 0x60
    uint8_t pad_bitfield_60_1 : 7;
    char pad_61[0x7];
    static UMaterialExpressionParticleSubUV* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
