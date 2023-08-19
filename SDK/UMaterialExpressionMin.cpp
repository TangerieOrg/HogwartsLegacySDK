#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionMin.hpp"
UMaterialExpressionMin* UMaterialExpressionMin::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionMin");
    return (UMaterialExpressionMin*)res;
}
