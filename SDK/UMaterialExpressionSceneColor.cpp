#include "EMaterialSceneAttributeInputMode\Type.hpp"
#include "FExpressionInput.hpp"
#include "FVector2D.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSceneColor.hpp"
UMaterialExpressionSceneColor* UMaterialExpressionSceneColor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSceneColor");
    return (UMaterialExpressionSceneColor*)res;
}
