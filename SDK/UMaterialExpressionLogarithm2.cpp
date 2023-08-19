#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionLogarithm2.hpp"
UMaterialExpressionLogarithm2* UMaterialExpressionLogarithm2::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionLogarithm2");
    return (UMaterialExpressionLogarithm2*)res;
}
