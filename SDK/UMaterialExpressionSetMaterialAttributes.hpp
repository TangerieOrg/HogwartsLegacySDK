#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "FGuid.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionSetMaterialAttributes : public UMaterialExpression {
public:
    TArray<FExpressionInput> Inputs; // 0x40
    TArray<FGuid> AttributeSetTypes; // 0x50
    static UMaterialExpressionSetMaterialAttributes* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
