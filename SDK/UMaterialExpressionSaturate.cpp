#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSaturate.hpp"
UMaterialExpressionSaturate* UMaterialExpressionSaturate::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSaturate");
    return (UMaterialExpressionSaturate*)res;
}
