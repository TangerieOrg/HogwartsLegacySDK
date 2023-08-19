#include "ESceneTextureId.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSceneTexture.hpp"
UMaterialExpressionSceneTexture* UMaterialExpressionSceneTexture::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSceneTexture");
    return (UMaterialExpressionSceneTexture*)res;
}
