#include "AActor.hpp"
#include "AWeatherMaster.hpp"
#include "UFunction.hpp"
#include "URenderSettingsComponent.hpp"
#include "UWeatherMasterComponent.hpp"
#include "UWindDirectionalSourceComponent.hpp"
AWeatherMaster* AWeatherMaster::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherMaster");
    return (AWeatherMaster*)res;
}
void AWeatherMaster::NextSequence() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMaster.NextSequence"));
    struct Params_NextSequence {
    }; // Size: 0x0
    Params_NextSequence params{};
    ProcessEvent(func, &params);
}
