#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSmoothStep.hpp"
UMaterialExpressionSmoothStep* UMaterialExpressionSmoothStep::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSmoothStep");
    return (UMaterialExpressionSmoothStep*)res;
}
