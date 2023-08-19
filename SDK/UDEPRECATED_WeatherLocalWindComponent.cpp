#include "FBlendDomain.hpp"
#include "UDEPRECATED_WeatherLocalWindComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UDEPRECATED_WeatherLocalWindComponent* UDEPRECATED_WeatherLocalWindComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherLocalWindComponent");
    return (UDEPRECATED_WeatherLocalWindComponent*)res;
}
void UDEPRECATED_WeatherLocalWindComponent::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherLocalWindComponent.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
