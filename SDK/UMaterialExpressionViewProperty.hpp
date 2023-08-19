#pragma once
#include <cstdint>
#include "EMaterialExposedViewProperty.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionViewProperty : public UMaterialExpression {
public:
    EMaterialExposedViewProperty Property; // 0x40
    char pad_41[0x7];
    static UMaterialExpressionViewProperty* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
