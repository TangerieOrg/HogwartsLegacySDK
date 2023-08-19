#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDecalLifetimeOpacity.hpp"
UMaterialExpressionDecalLifetimeOpacity* UMaterialExpressionDecalLifetimeOpacity::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDecalLifetimeOpacity");
    return (UMaterialExpressionDecalLifetimeOpacity*)res;
}
