#include "UMaterialExpression.hpp"
#include "UMaterialExpressionInsideMask.hpp"
UMaterialExpressionInsideMask* UMaterialExpressionInsideMask::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionInsideMask");
    return (UMaterialExpressionInsideMask*)res;
}
