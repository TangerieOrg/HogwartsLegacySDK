#pragma once
#include <cstdint>
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionPixelDepth : public UMaterialExpression {
public:
    static UMaterialExpressionPixelDepth* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
