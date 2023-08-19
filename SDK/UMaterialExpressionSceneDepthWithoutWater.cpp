#include "EMaterialSceneAttributeInputMode\Type.hpp"
#include "FExpressionInput.hpp"
#include "FVector2D.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSceneDepthWithoutWater.hpp"
UMaterialExpressionSceneDepthWithoutWater* UMaterialExpressionSceneDepthWithoutWater::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSceneDepthWithoutWater");
    return (UMaterialExpressionSceneDepthWithoutWater*)res;
}
