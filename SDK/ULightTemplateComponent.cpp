#include "FLightTemplateSettings.hpp"
#include "UFunction.hpp"
#include "ULightTemplateComponent.hpp"
#include "USceneComponent.hpp"
ULightTemplateComponent* ULightTemplateComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightTemplateComponent");
    return (ULightTemplateComponent*)res;
}
void ULightTemplateComponent::SetIntensityFactor(float InIntensityFactor, bool bApplyNow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightTemplateComponent.SetIntensityFactor"));
    struct Params_SetIntensityFactor {
        float InIntensityFactor; // 0x0
        bool bApplyNow; // 0x4
    }; // Size: 0x5
    Params_SetIntensityFactor params{};
    params.InIntensityFactor = (float)InIntensityFactor;
    params.bApplyNow = (bool)bApplyNow;
    ProcessEvent(func, &params);
}
