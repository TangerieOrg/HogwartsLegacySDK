#include "UMaterialFunction.hpp"
#include "UMaterialFunctionMaterialLayer.hpp"
UMaterialFunctionMaterialLayer* UMaterialFunctionMaterialLayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialFunctionMaterialLayer");
    return (UMaterialFunctionMaterialLayer*)res;
}
