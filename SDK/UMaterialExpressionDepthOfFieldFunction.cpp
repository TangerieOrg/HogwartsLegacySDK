#include "EDepthOfFieldFunctionValue.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDepthOfFieldFunction.hpp"
UMaterialExpressionDepthOfFieldFunction* UMaterialExpressionDepthOfFieldFunction::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDepthOfFieldFunction");
    return (UMaterialExpressionDepthOfFieldFunction*)res;
}
