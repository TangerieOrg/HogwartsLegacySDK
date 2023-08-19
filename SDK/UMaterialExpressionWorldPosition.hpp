#pragma once
#include <cstdint>
#include "EWorldPositionIncludedOffsets.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionWorldPosition : public UMaterialExpression {
public:
    EWorldPositionIncludedOffsets WorldPositionShaderOffset; // 0x40
    char pad_41[0x7];
    static UMaterialExpressionWorldPosition* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
