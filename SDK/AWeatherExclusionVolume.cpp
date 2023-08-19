#include "AVolume.hpp"
#include "AWeatherExclusionVolume.hpp"
#include "UFunction.hpp"
AWeatherExclusionVolume* AWeatherExclusionVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherExclusionVolume");
    return (AWeatherExclusionVolume*)res;
}
void AWeatherExclusionVolume::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherExclusionVolume.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
