#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSceneTexelSize.hpp"
UMaterialExpressionSceneTexelSize* UMaterialExpressionSceneTexelSize::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSceneTexelSize");
    return (UMaterialExpressionSceneTexelSize*)res;
}
