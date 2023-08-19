#include "UMaterialExpression.hpp"
#include "UMaterialExpressionPrecomputedAOMask.hpp"
UMaterialExpressionPrecomputedAOMask* UMaterialExpressionPrecomputedAOMask::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionPrecomputedAOMask");
    return (UMaterialExpressionPrecomputedAOMask*)res;
}
