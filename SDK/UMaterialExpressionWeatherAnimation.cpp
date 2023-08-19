#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionWeatherAnimation.hpp"
UMaterialExpressionWeatherAnimation* UMaterialExpressionWeatherAnimation::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionWeatherAnimation");
    return (UMaterialExpressionWeatherAnimation*)res;
}
