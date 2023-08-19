#include "UMaterialFunction.hpp"
#include "UMaterialFunctionInterface.hpp"
UMaterialFunction* UMaterialFunction::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialFunction");
    return (UMaterialFunction*)res;
}
