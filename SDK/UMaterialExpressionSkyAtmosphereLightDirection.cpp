#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSkyAtmosphereLightDirection.hpp"
UMaterialExpressionSkyAtmosphereLightDirection* UMaterialExpressionSkyAtmosphereLightDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSkyAtmosphereLightDirection");
    return (UMaterialExpressionSkyAtmosphereLightDirection*)res;
}
