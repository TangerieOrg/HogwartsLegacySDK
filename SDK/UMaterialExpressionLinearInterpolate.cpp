#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionLinearInterpolate.hpp"
UMaterialExpressionLinearInterpolate* UMaterialExpressionLinearInterpolate::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionLinearInterpolate");
    return (UMaterialExpressionLinearInterpolate*)res;
}
