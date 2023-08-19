#pragma once
#include <cstdint>
#include "EClampMode.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionClamp : public UMaterialExpression {
public:
    FExpressionInput Input; // 0x40
    FExpressionInput Min; // 0x54
    FExpressionInput Max; // 0x68
    EClampMode ClampMode; // 0x7c
    char pad_7d[0x3];
    float MinDefault; // 0x80
    float MaxDefault; // 0x84
    static UMaterialExpressionClamp* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
