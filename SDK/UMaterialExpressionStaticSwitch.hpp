#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionStaticSwitch : public UMaterialExpression {
public:
    uint8_t DefaultValue : 1; // 0x40
    uint8_t pad_bitfield_40_1 : 7;
    char pad_41[0x3];
    FExpressionInput A; // 0x44
    FExpressionInput B; // 0x58
    FExpressionInput Value; // 0x6c
    static UMaterialExpressionStaticSwitch* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
