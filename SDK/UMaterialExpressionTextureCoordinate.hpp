#pragma once
#include <cstdint>
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionTextureCoordinate : public UMaterialExpression {
public:
    int32_t CoordinateIndex; // 0x40
    float UTiling; // 0x44
    float VTiling; // 0x48
    uint8_t UnMirrorU : 1; // 0x4c
    uint8_t UnMirrorV : 1; // 0x4c
    uint8_t pad_bitfield_4c_2 : 6;
    char pad_4d[0x3];
    static UMaterialExpressionTextureCoordinate* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
