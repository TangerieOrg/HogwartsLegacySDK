#include "FLinearColor.hpp"
#include "UPostProcessingVarColorBase.hpp"
#include "UPostProcessingVarColorConstant.hpp"
UPostProcessingVarColorConstant* UPostProcessingVarColorConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessingVarColorConstant");
    return (UPostProcessingVarColorConstant*)res;
}
