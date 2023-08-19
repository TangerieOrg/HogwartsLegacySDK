#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSine.hpp"
UMaterialExpressionSine* UMaterialExpressionSine::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSine");
    return (UMaterialExpressionSine*)res;
}
