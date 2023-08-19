#pragma once
#include <cstdint>
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionStaticBool : public UMaterialExpression {
public:
    uint8_t Value : 1; // 0x40
    uint8_t pad_bitfield_40_1 : 7;
    char pad_41[0x7];
    static UMaterialExpressionStaticBool* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
