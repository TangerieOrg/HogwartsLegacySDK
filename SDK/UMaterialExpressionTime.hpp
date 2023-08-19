#pragma once
#include <cstdint>
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionTime : public UMaterialExpression {
public:
    uint8_t bIgnorePause : 1; // 0x40
    uint8_t bOverride_Period : 1; // 0x40
    uint8_t pad_bitfield_40_2 : 6;
    char pad_41[0x3];
    float Period; // 0x44
    static UMaterialExpressionTime* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
