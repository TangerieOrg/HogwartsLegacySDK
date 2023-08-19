#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionArcsine.hpp"
UMaterialExpressionArcsine* UMaterialExpressionArcsine::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionArcsine");
    return (UMaterialExpressionArcsine*)res;
}
