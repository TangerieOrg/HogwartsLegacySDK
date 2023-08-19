#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionMaterialProxyReplace : public UMaterialExpression {
public:
    FExpressionInput RealTime; // 0x40
    FExpressionInput MaterialProxy; // 0x54
    static UMaterialExpressionMaterialProxyReplace* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
