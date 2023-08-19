#include "FMercunaMoveRequest.hpp"
#include "UFunction.hpp"
#include "UIcarusNavigationComponent.hpp"
#include "UMercunaNavigationComponent.hpp"
#include "UMercunaPath.hpp"
UIcarusNavigationComponent* UIcarusNavigationComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/IcarusRuntime.IcarusNavigationComponent");
    return (UIcarusNavigationComponent*)res;
}
void UIcarusNavigationComponent::SetUseTurnSmoothing(bool bInUseTurnSmoothing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/IcarusRuntime.IcarusNavigationComponent.SetUseTurnSmoothing"));
    struct Params_SetUseTurnSmoothing {
        bool bInUseTurnSmoothing; // 0x0
    }; // Size: 0x1
    Params_SetUseTurnSmoothing params{};
    params.bInUseTurnSmoothing = (bool)bInUseTurnSmoothing;
    ProcessEvent(func, &params);
}
bool UIcarusNavigationComponent::GetUseTurnSmoothing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/IcarusRuntime.IcarusNavigationComponent.GetUseTurnSmoothing"));
    struct Params_GetUseTurnSmoothing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetUseTurnSmoothing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
