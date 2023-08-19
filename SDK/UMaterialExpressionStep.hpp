#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionStep : public UMaterialExpression {
public:
    FExpressionInput Y; // 0x40
    FExpressionInput X; // 0x54
    float ConstY; // 0x68
    float ConstX; // 0x6c
    static UMaterialExpressionStep* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
