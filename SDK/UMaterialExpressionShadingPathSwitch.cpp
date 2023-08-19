#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionShadingPathSwitch.hpp"
UMaterialExpressionShadingPathSwitch* UMaterialExpressionShadingPathSwitch::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionShadingPathSwitch");
    return (UMaterialExpressionShadingPathSwitch*)res;
}
