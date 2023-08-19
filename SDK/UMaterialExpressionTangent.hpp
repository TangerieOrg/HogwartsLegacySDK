#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionTangent : public UMaterialExpression {
public:
    FExpressionInput Input; // 0x40
    float Period; // 0x54
    static UMaterialExpressionTangent* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
