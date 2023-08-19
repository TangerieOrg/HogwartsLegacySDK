#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionRayTracingQualitySwitch : public UMaterialExpression {
public:
    FExpressionInput Normal; // 0x40
    FExpressionInput RayTraced; // 0x54
    static UMaterialExpressionRayTracingQualitySwitch* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
