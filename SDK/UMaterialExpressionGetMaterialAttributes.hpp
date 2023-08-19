#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FMaterialAttributesInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionGetMaterialAttributes : public UMaterialExpression {
public:
    FMaterialAttributesInput MaterialAttributes; // 0x40
    TArray<FGuid> AttributeGetTypes; // 0x60
    static UMaterialExpressionGetMaterialAttributes* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
