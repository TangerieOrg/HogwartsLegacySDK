#include "UMaterialFunctionInstance.hpp"
#include "UMaterialFunctionMaterialLayerInstance.hpp"
UMaterialFunctionMaterialLayerInstance* UMaterialFunctionMaterialLayerInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialFunctionMaterialLayerInstance");
    return (UMaterialFunctionMaterialLayerInstance*)res;
}
