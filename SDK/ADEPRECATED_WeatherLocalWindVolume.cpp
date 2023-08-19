#include "ADEPRECATED_WeatherLocalWindVolume.hpp"
#include "AVolume.hpp"
#include "FBlendDomain.hpp"
#include "UFunction.hpp"
ADEPRECATED_WeatherLocalWindVolume* ADEPRECATED_WeatherLocalWindVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherLocalWindVolume");
    return (ADEPRECATED_WeatherLocalWindVolume*)res;
}
void ADEPRECATED_WeatherLocalWindVolume::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherLocalWindVolume.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
