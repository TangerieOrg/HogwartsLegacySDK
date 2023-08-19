#include "EPostProcessingVarScalar.hpp"
#include "UPostProcessingVar.hpp"
#include "UPostProcessingVarScalarBase.hpp"
UPostProcessingVarScalarBase* UPostProcessingVarScalarBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessingVarScalarBase");
    return (UPostProcessingVarScalarBase*)res;
}
