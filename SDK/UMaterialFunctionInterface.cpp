#include "EMaterialFunctionUsage.hpp"
#include "FGuid.hpp"
#include "UMaterialFunctionInterface.hpp"
#include "UObject.hpp"
UMaterialFunctionInterface* UMaterialFunctionInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialFunctionInterface");
    return (UMaterialFunctionInterface*)res;
}
