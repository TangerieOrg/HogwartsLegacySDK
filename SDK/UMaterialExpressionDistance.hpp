#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionDistance : public UMaterialExpression {
public:
    FExpressionInput A; // 0x40
    FExpressionInput B; // 0x54
    static UMaterialExpressionDistance* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
