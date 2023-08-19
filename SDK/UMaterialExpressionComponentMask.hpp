#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionComponentMask : public UMaterialExpression {
public:
    FExpressionInput Input; // 0x40
    uint8_t R : 1; // 0x54
    uint8_t G : 1; // 0x54
    uint8_t B : 1; // 0x54
    uint8_t A : 1; // 0x54
    uint8_t pad_bitfield_54_4 : 4;
    char pad_55[0x3];
    static UMaterialExpressionComponentMask* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
