#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionRuntimeVirtualTextureReplace.hpp"
UMaterialExpressionRuntimeVirtualTextureReplace* UMaterialExpressionRuntimeVirtualTextureReplace::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionRuntimeVirtualTextureReplace");
    return (UMaterialExpressionRuntimeVirtualTextureReplace*)res;
}
