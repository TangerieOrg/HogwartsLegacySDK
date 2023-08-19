#include "UMaterialExpression.hpp"
#include "UMaterialExpressionTextureBase.hpp"
#include "UTexture.hpp"
UMaterialExpressionTextureBase* UMaterialExpressionTextureBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTextureBase");
    return (UMaterialExpressionTextureBase*)res;
}
