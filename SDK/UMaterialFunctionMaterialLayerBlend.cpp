#include "UMaterialFunction.hpp"
#include "UMaterialFunctionMaterialLayerBlend.hpp"
UMaterialFunctionMaterialLayerBlend* UMaterialFunctionMaterialLayerBlend::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialFunctionMaterialLayerBlend");
    return (UMaterialFunctionMaterialLayerBlend*)res;
}
