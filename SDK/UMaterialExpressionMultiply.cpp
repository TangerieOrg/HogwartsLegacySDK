#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionMultiply.hpp"
UMaterialExpressionMultiply* UMaterialExpressionMultiply::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionMultiply");
    return (UMaterialExpressionMultiply*)res;
}
