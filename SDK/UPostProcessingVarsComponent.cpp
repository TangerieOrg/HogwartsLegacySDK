#include "UPostProcessingVar.hpp"
#include "UPostProcessingVarsComponent.hpp"
#include "UPostProcessingVarsComponentBase.hpp"
UPostProcessingVarsComponent* UPostProcessingVarsComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessingVarsComponent");
    return (UPostProcessingVarsComponent*)res;
}
