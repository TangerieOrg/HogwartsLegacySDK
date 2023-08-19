#pragma once
#include <cstdint>
#include "FExpressionOutput.hpp"
#include "FGuid.hpp"
class UMaterialExpressionFunctionOutput;
#pragma pack(push, 1)
struct FFunctionExpressionOutput {
    UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
    FGuid ExpressionOutputId; // 0x8
    FExpressionOutput Output; // 0x18
}; // Size: 0x20
#pragma pack(pop)
