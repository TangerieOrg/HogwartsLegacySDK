#include "FBlendDomain.hpp"
#include "FPostProcessSettings.hpp"
#include "UFunction.hpp"
#include "UPostProcessingVarsComponentBase.hpp"
#include "UPostProcessingVarsDriver.hpp"
#include "USceneComponent.hpp"
void UPostProcessingVarsComponentBase::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.PostProcessingVarsComponentBase.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
UPostProcessingVarsComponentBase* UPostProcessingVarsComponentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessingVarsComponentBase");
    return (UPostProcessingVarsComponentBase*)res;
}
