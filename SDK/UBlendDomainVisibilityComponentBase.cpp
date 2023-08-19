#include "UBlendDomainVisibilityComponentBase.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UBlendDomainVisibilityComponentBase* UBlendDomainVisibilityComponentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.BlendDomainVisibilityComponentBase");
    return (UBlendDomainVisibilityComponentBase*)res;
}
void UBlendDomainVisibilityComponentBase::SetEnabled(bool bNewEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.BlendDomainVisibilityComponentBase.SetEnabled"));
    struct Params_SetEnabled {
        bool bNewEnabled; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.bNewEnabled = (bool)bNewEnabled;
    ProcessEvent(func, &params);
}
void UBlendDomainVisibilityComponentBase::ForceUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.BlendDomainVisibilityComponentBase.ForceUpdate"));
    struct Params_ForceUpdate {
    }; // Size: 0x0
    Params_ForceUpdate params{};
    ProcessEvent(func, &params);
}
