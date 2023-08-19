#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDepthFade.hpp"
UMaterialExpressionDepthFade* UMaterialExpressionDepthFade::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDepthFade");
    return (UMaterialExpressionDepthFade*)res;
}
