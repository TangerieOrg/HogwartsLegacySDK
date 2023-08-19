#include "AWeatherStormFXBase.hpp"
#include "AWeatherStormFXSimple.hpp"
#include "FWeatherStormTypeFXSettings.hpp"
#include "FWeatherStormTypeFXSettingsState.hpp"
AWeatherStormFXSimple* AWeatherStormFXSimple::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherStormFXSimple");
    return (AWeatherStormFXSimple*)res;
}
