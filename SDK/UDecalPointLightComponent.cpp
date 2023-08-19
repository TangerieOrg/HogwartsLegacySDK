#include "FDecalPointLightInfo.hpp"
#include "UDecalPointLightComponent.hpp"
#include "UDecalPointLightComponentBase.hpp"
#include "UFunction.hpp"
UDecalPointLightComponent* UDecalPointLightComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.DecalPointLightComponent");
    return (UDecalPointLightComponent*)res;
}
void UDecalPointLightComponent::SetDecalPointLightInfo(FDecalPointLightInfo NewInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.DecalPointLightComponent.SetDecalPointLightInfo"));
    struct Params_SetDecalPointLightInfo {
        FDecalPointLightInfo NewInfo; // 0x0
    }; // Size: 0x28
    Params_SetDecalPointLightInfo params{};
    params.NewInfo = (FDecalPointLightInfo)NewInfo;
    ProcessEvent(func, &params);
}
