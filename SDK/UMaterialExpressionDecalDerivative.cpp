#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDecalDerivative.hpp"
UMaterialExpressionDecalDerivative* UMaterialExpressionDecalDerivative::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDecalDerivative");
    return (UMaterialExpressionDecalDerivative*)res;
}
