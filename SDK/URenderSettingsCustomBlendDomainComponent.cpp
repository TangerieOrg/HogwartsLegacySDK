#include "FRenderSettingsCustomBlendDomainNameWithValue.hpp"
#include "UFunction.hpp"
#include "URenderSettingsCustomBlendDomainComponent.hpp"
#include "USceneComponent.hpp"
URenderSettingsCustomBlendDomainComponent* URenderSettingsCustomBlendDomainComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainComponent");
    return (URenderSettingsCustomBlendDomainComponent*)res;
}
void URenderSettingsCustomBlendDomainComponent::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsCustomBlendDomainComponent.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
