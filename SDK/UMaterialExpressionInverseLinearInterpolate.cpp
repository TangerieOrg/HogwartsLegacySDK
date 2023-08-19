#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionInverseLinearInterpolate.hpp"
UMaterialExpressionInverseLinearInterpolate* UMaterialExpressionInverseLinearInterpolate::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionInverseLinearInterpolate");
    return (UMaterialExpressionInverseLinearInterpolate*)res;
}
