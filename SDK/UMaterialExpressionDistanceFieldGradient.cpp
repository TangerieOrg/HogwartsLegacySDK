#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDistanceFieldGradient.hpp"
UMaterialExpressionDistanceFieldGradient* UMaterialExpressionDistanceFieldGradient::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDistanceFieldGradient");
    return (UMaterialExpressionDistanceFieldGradient*)res;
}
