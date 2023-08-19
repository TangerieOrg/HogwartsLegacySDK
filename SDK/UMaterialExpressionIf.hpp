#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionIf : public UMaterialExpression {
public:
    FExpressionInput A; // 0x40
    FExpressionInput B; // 0x54
    FExpressionInput AGreaterThanB; // 0x68
    FExpressionInput AEqualsB; // 0x7c
    FExpressionInput ALessThanB; // 0x90
    float EqualsThreshold; // 0xa4
    float ConstB; // 0xa8
    float ConstAEqualsB; // 0xac
    static UMaterialExpressionIf* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
