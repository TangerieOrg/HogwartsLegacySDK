#include "UMaterialExpression.hpp"
#include "UMaterialExpressionPerInstanceFadeAmount.hpp"
UMaterialExpressionPerInstanceFadeAmount* UMaterialExpressionPerInstanceFadeAmount::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionPerInstanceFadeAmount");
    return (UMaterialExpressionPerInstanceFadeAmount*)res;
}
