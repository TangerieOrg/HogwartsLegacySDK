#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionArccosine : public UMaterialExpression {
public:
    FExpressionInput Input; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionArccosine* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
