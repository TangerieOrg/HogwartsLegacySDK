#pragma once
#include <cstdint>
#include "FMaterialAttributesInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionBreakMaterialAttributes : public UMaterialExpression {
public:
    FMaterialAttributesInput MaterialAttributes; // 0x40
    static UMaterialExpressionBreakMaterialAttributes* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
