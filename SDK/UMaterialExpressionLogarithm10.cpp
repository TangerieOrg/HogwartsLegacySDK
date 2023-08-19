#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionLogarithm10.hpp"
UMaterialExpressionLogarithm10* UMaterialExpressionLogarithm10::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionLogarithm10");
    return (UMaterialExpressionLogarithm10*)res;
}
