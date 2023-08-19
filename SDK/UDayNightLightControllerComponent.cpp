#include "UAnimatedLightClusterComponentAuto.hpp"
#include "UDayNightLightControllerComponent.hpp"
#include "UFunction.hpp"
UDayNightLightControllerComponent* UDayNightLightControllerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightLightControllerComponent");
    return (UDayNightLightControllerComponent*)res;
}
void UDayNightLightControllerComponent::IsLightControllerEnabled(bool& bIsControllerEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightLightControllerComponent.IsLightControllerEnabled"));
    struct Params_IsLightControllerEnabled {
        bool bIsControllerEnabled; // 0x0
    }; // Size: 0x1
    Params_IsLightControllerEnabled params{};
    params.bIsControllerEnabled = (bool)bIsControllerEnabled;
    ProcessEvent(func, &params);
    bIsControllerEnabled = params.bIsControllerEnabled;
}
void UDayNightLightControllerComponent::EnableLightController(bool bEnableController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightLightControllerComponent.EnableLightController"));
    struct Params_EnableLightController {
        bool bEnableController; // 0x0
    }; // Size: 0x1
    Params_EnableLightController params{};
    params.bEnableController = (bool)bEnableController;
    ProcessEvent(func, &params);
}
