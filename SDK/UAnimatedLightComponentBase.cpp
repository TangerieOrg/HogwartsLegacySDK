#include "UAnimatedLightClusterComponentAuto.hpp"
#include "UAnimatedLightComponentBase.hpp"
#include "UFunction.hpp"
UAnimatedLightComponentBase* UAnimatedLightComponentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimatedLights.AnimatedLightComponentBase");
    return (UAnimatedLightComponentBase*)res;
}
void UAnimatedLightComponentBase::IsAnimatedLightEnabled(bool& bIsEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightComponentBase.IsAnimatedLightEnabled"));
    struct Params_IsAnimatedLightEnabled {
        bool bIsEnabled; // 0x0
    }; // Size: 0x1
    Params_IsAnimatedLightEnabled params{};
    params.bIsEnabled = (bool)bIsEnabled;
    ProcessEvent(func, &params);
    bIsEnabled = params.bIsEnabled;
}
void UAnimatedLightComponentBase::EnableAnimatedLight(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightComponentBase.EnableAnimatedLight"));
    struct Params_EnableAnimatedLight {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_EnableAnimatedLight params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void UAnimatedLightComponentBase::DisableAnimatedLight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightComponentBase.DisableAnimatedLight"));
    struct Params_DisableAnimatedLight {
    }; // Size: 0x0
    Params_DisableAnimatedLight params{};
    ProcessEvent(func, &params);
}
