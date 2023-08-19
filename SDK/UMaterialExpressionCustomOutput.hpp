#pragma once
#include <cstdint>
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionCustomOutput : public UMaterialExpression {
public:
    static UMaterialExpressionCustomOutput* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
