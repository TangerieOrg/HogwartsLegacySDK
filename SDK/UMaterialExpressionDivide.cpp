#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDivide.hpp"
UMaterialExpressionDivide* UMaterialExpressionDivide::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDivide");
    return (UMaterialExpressionDivide*)res;
}
