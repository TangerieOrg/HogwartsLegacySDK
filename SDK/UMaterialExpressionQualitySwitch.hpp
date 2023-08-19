#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionQualitySwitch : public UMaterialExpression {
public:
    FExpressionInput Default; // 0x40
    FExpressionInput Inputs[4]; // 0x54
    char pad_a4[0x4];
    static UMaterialExpressionQualitySwitch* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
