#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDecalMipmapLevel.hpp"
UMaterialExpressionDecalMipmapLevel* UMaterialExpressionDecalMipmapLevel::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDecalMipmapLevel");
    return (UMaterialExpressionDecalMipmapLevel*)res;
}
