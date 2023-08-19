#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionShadowReplace : public UMaterialExpression {
public:
    FExpressionInput Default; // 0x40
    FExpressionInput Shadow; // 0x54
    static UMaterialExpressionShadowReplace* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
