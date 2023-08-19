#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UWeatherExclusionComponent.hpp"
UWeatherExclusionComponent* UWeatherExclusionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherExclusionComponent");
    return (UWeatherExclusionComponent*)res;
}
void UWeatherExclusionComponent::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherExclusionComponent.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
