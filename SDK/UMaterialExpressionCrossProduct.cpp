#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionCrossProduct.hpp"
UMaterialExpressionCrossProduct* UMaterialExpressionCrossProduct::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionCrossProduct");
    return (UMaterialExpressionCrossProduct*)res;
}
