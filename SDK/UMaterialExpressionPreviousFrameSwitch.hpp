#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionPreviousFrameSwitch : public UMaterialExpression {
public:
    FExpressionInput CurrentFrame; // 0x40
    FExpressionInput PreviousFrame; // 0x54
    static UMaterialExpressionPreviousFrameSwitch* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
