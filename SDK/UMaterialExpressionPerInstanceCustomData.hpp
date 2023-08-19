#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionPerInstanceCustomData : public UMaterialExpression {
public:
    FExpressionInput DefaultValue; // 0x40
    float ConstDefaultValue; // 0x54
    uint32_t DataIndex; // 0x58
    char pad_5c[0x4];
    static UMaterialExpressionPerInstanceCustomData* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
