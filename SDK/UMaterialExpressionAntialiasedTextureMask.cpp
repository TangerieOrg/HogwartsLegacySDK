#include "ETextureColorChannel.hpp"
#include "UMaterialExpressionAntialiasedTextureMask.hpp"
#include "UMaterialExpressionTextureSampleParameter2D.hpp"
UMaterialExpressionAntialiasedTextureMask* UMaterialExpressionAntialiasedTextureMask::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionAntialiasedTextureMask");
    return (UMaterialExpressionAntialiasedTextureMask*)res;
}
