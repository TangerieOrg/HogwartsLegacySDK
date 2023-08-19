#include "EMaterialSceneAttributeInputMode\Type.hpp"
#include "FExpressionInput.hpp"
#include "FVector2D.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSceneDepth.hpp"
UMaterialExpressionSceneDepth* UMaterialExpressionSceneDepth::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSceneDepth");
    return (UMaterialExpressionSceneDepth*)res;
}
