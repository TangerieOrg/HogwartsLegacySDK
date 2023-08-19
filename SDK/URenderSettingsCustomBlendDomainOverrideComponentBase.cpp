#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "URenderSettingsCustomBlendDomainOverrideComponentBase.hpp"
void URenderSettingsCustomBlendDomainOverrideComponentBase::IsEnabled(bool& bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsCustomBlendDomainOverrideComponentBase.IsEnabled"));
    struct Params_IsEnabled {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_IsEnabled params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
    bEnable = params.bEnable;
}
URenderSettingsCustomBlendDomainOverrideComponentBase* URenderSettingsCustomBlendDomainOverrideComponentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainOverrideComponentBase");
    return (URenderSettingsCustomBlendDomainOverrideComponentBase*)res;
}
void URenderSettingsCustomBlendDomainOverrideComponentBase::SetEnabled(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsCustomBlendDomainOverrideComponentBase.SetEnabled"));
    struct Params_SetEnabled {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
