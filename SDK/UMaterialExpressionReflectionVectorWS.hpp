#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionReflectionVectorWS : public UMaterialExpression {
public:
    FExpressionInput CustomWorldNormal; // 0x40
    uint8_t bNormalizeCustomWorldNormal : 1; // 0x54
    uint8_t pad_bitfield_54_1 : 7;
    char pad_55[0x3];
    static UMaterialExpressionReflectionVectorWS* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
