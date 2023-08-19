#pragma once
#include <cstdint>
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionConstant2Vector : public UMaterialExpression {
public:
    float R; // 0x40
    float G; // 0x44
    static UMaterialExpressionConstant2Vector* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
