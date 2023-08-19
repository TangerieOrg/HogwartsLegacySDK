#pragma once
#include <cstdint>
#include "UMaterialExpressionTextureSampleParameter2D.hpp"
#pragma pack(push, 1)
class UMaterialExpressionTextureSampleParameterSubUV : public UMaterialExpressionTextureSampleParameter2D {
public:
    uint8_t bBlend : 1; // 0x80
    uint8_t pad_bitfield_80_1 : 7;
    char pad_81[0x7];
    static UMaterialExpressionTextureSampleParameterSubUV* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
