#include "UPostProcessingVarScalarBase.hpp"
#include "UPostProcessingVarScalarConstant.hpp"
UPostProcessingVarScalarConstant* UPostProcessingVarScalarConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessingVarScalarConstant");
    return (UPostProcessingVarScalarConstant*)res;
}
