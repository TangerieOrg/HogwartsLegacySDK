#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionReflectionCapturePassSwitch : public UMaterialExpression {
public:
    FExpressionInput Default; // 0x40
    FExpressionInput Reflection; // 0x54
    static UMaterialExpressionReflectionCapturePassSwitch* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
