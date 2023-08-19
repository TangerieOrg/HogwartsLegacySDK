#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionStep.hpp"
UMaterialExpressionStep* UMaterialExpressionStep::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionStep");
    return (UMaterialExpressionStep*)res;
}
