#include "AWeatherStormFXBase.hpp"
#include "AWeatherStormFXMulti.hpp"
#include "FWeatherStormTypeFXSettings.hpp"
#include "FWeatherStormTypeFXSettingsState.hpp"
AWeatherStormFXMulti* AWeatherStormFXMulti::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherStormFXMulti");
    return (AWeatherStormFXMulti*)res;
}
