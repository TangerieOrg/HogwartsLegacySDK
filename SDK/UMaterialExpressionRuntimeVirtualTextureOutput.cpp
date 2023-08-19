#include "FExpressionInput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
#include "UMaterialExpressionRuntimeVirtualTextureOutput.hpp"
UMaterialExpressionRuntimeVirtualTextureOutput* UMaterialExpressionRuntimeVirtualTextureOutput::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionRuntimeVirtualTextureOutput");
    return (UMaterialExpressionRuntimeVirtualTextureOutput*)res;
}
