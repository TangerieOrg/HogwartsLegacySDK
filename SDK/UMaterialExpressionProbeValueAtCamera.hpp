#pragma once
#include <cstdint>
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionProbeValueAtCamera : public UMaterialExpression {
public:
    static UMaterialExpressionProbeValueAtCamera* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
