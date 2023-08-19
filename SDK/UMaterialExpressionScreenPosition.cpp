#include "UMaterialExpression.hpp"
#include "UMaterialExpressionScreenPosition.hpp"
UMaterialExpressionScreenPosition* UMaterialExpressionScreenPosition::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionScreenPosition");
    return (UMaterialExpressionScreenPosition*)res;
}
