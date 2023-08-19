#include "UMaterialExpression.hpp"
#include "UMaterialExpressionConstant.hpp"
UMaterialExpressionConstant* UMaterialExpressionConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionConstant");
    return (UMaterialExpressionConstant*)res;
}
