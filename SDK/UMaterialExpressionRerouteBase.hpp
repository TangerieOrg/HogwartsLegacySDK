#pragma once
#include <cstdint>
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionRerouteBase : public UMaterialExpression {
public:
    static UMaterialExpressionRerouteBase* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
