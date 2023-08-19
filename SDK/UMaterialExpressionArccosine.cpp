#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionArccosine.hpp"
UMaterialExpressionArccosine* UMaterialExpressionArccosine::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionArccosine");
    return (UMaterialExpressionArccosine*)res;
}
