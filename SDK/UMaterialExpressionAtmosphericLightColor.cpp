#include "UMaterialExpression.hpp"
#include "UMaterialExpressionAtmosphericLightColor.hpp"
UMaterialExpressionAtmosphericLightColor* UMaterialExpressionAtmosphericLightColor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionAtmosphericLightColor");
    return (UMaterialExpressionAtmosphericLightColor*)res;
}
