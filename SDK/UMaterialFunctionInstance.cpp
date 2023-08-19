#include "FFontParameterValue.hpp"
#include "FRuntimeVirtualTextureParameterValue.hpp"
#include "FScalarParameterValue.hpp"
#include "FStaticComponentMaskParameter.hpp"
#include "FStaticSwitchParameter.hpp"
#include "FTextureParameterValue.hpp"
#include "FVectorParameterValue.hpp"
#include "UMaterialFunctionInstance.hpp"
#include "UMaterialFunctionInterface.hpp"
UMaterialFunctionInstance* UMaterialFunctionInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialFunctionInstance");
    return (UMaterialFunctionInstance*)res;
}
