#include "UDecalPointLightComponentBase.hpp"
#include "UFadeToDecalPointLightComponent.hpp"
#include "UFunction.hpp"
UFadeToDecalPointLightComponent* UFadeToDecalPointLightComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FadeToDecalPointLightComponent");
    return (UFadeToDecalPointLightComponent*)res;
}
void UFadeToDecalPointLightComponent::SetUseLightVisibility(bool bNewUseLightVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FadeToDecalPointLightComponent.SetUseLightVisibility"));
    struct Params_SetUseLightVisibility {
        bool bNewUseLightVisibility; // 0x0
    }; // Size: 0x1
    Params_SetUseLightVisibility params{};
    params.bNewUseLightVisibility = (bool)bNewUseLightVisibility;
    ProcessEvent(func, &params);
}
void UFadeToDecalPointLightComponent::SetLightParametersCanChange(bool bNewLightParametersCanChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FadeToDecalPointLightComponent.SetLightParametersCanChange"));
    struct Params_SetLightParametersCanChange {
        bool bNewLightParametersCanChange; // 0x0
    }; // Size: 0x1
    Params_SetLightParametersCanChange params{};
    params.bNewLightParametersCanChange = (bool)bNewLightParametersCanChange;
    ProcessEvent(func, &params);
}
