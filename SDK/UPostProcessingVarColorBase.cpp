#include "EPostProcessingVarColor.hpp"
#include "UPostProcessingVar.hpp"
#include "UPostProcessingVarColorBase.hpp"
UPostProcessingVarColorBase* UPostProcessingVarColorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessingVarColorBase");
    return (UPostProcessingVarColorBase*)res;
}
