#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionPanner.hpp"
UMaterialExpressionPanner* UMaterialExpressionPanner::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionPanner");
    return (UMaterialExpressionPanner*)res;
}
