#include "EMaterialSamplerType.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionTextureArray.hpp"
#include "UTexture.hpp"
UMaterialExpressionTextureArray* UMaterialExpressionTextureArray::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTextureArray");
    return (UMaterialExpressionTextureArray*)res;
}
