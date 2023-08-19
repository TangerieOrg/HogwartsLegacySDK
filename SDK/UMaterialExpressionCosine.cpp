#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionCosine.hpp"
UMaterialExpressionCosine* UMaterialExpressionCosine::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionCosine");
    return (UMaterialExpressionCosine*)res;
}
