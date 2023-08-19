#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionArctangent2Fast : public UMaterialExpression {
public:
    FExpressionInput Y; // 0x40
    FExpressionInput X; // 0x54
    static UMaterialExpressionArctangent2Fast* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
