#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDistanceFieldsRenderingSwitch.hpp"
UMaterialExpressionDistanceFieldsRenderingSwitch* UMaterialExpressionDistanceFieldsRenderingSwitch::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDistanceFieldsRenderingSwitch");
    return (UMaterialExpressionDistanceFieldsRenderingSwitch*)res;
}
