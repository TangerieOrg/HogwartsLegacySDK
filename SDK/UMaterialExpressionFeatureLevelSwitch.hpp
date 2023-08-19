#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionFeatureLevelSwitch : public UMaterialExpression {
public:
    FExpressionInput Default; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionFeatureLevelSwitch* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
