#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionRayTracingQualitySwitch.hpp"
UMaterialExpressionRayTracingQualitySwitch* UMaterialExpressionRayTracingQualitySwitch::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionRayTracingQualitySwitch");
    return (UMaterialExpressionRayTracingQualitySwitch*)res;
}
