#pragma once
#include <cstdint>
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionDeltaTime : public UMaterialExpression {
public:
    static UMaterialExpressionDeltaTime* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
