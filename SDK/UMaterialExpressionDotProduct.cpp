#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDotProduct.hpp"
UMaterialExpressionDotProduct* UMaterialExpressionDotProduct::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDotProduct");
    return (UMaterialExpressionDotProduct*)res;
}
