#include "ERuntimeVirtualTextureMaterialType.hpp"
#include "ERuntimeVirtualTextureMipValueMode.hpp"
#include "ERuntimeVirtualTextureTextureAddressMode.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionRuntimeVirtualTextureSample.hpp"
#include "URuntimeVirtualTexture.hpp"
UMaterialExpressionRuntimeVirtualTextureSample* UMaterialExpressionRuntimeVirtualTextureSample::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionRuntimeVirtualTextureSample");
    return (UMaterialExpressionRuntimeVirtualTextureSample*)res;
}
