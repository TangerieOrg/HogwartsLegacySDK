#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionShadowReplace.hpp"
UMaterialExpressionShadowReplace* UMaterialExpressionShadowReplace::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionShadowReplace");
    return (UMaterialExpressionShadowReplace*)res;
}
