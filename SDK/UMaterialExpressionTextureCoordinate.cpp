#include "UMaterialExpression.hpp"
#include "UMaterialExpressionTextureCoordinate.hpp"
UMaterialExpressionTextureCoordinate* UMaterialExpressionTextureCoordinate::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTextureCoordinate");
    return (UMaterialExpressionTextureCoordinate*)res;
}
