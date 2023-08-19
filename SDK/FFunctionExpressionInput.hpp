#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "FGuid.hpp"
class UMaterialExpressionFunctionInput;
#pragma pack(push, 1)
struct FFunctionExpressionInput {
    UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
    FGuid ExpressionInputId; // 0x8
    FExpressionInput Input; // 0x18
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
