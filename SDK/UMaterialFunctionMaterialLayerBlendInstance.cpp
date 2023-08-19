#include "UMaterialFunctionInstance.hpp"
#include "UMaterialFunctionMaterialLayerBlendInstance.hpp"
UMaterialFunctionMaterialLayerBlendInstance* UMaterialFunctionMaterialLayerBlendInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialFunctionMaterialLayerBlendInstance");
    return (UMaterialFunctionMaterialLayerBlendInstance*)res;
}
