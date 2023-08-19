#include "UMaterialExpression.hpp"
#include "UMaterialExpressionPerInstanceRandom.hpp"
UMaterialExpressionPerInstanceRandom* UMaterialExpressionPerInstanceRandom::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionPerInstanceRandom");
    return (UMaterialExpressionPerInstanceRandom*)res;
}
