#include "FWeatherDecalParameters.hpp"
#include "UWeatherDecalSettings.hpp"
#include "UWeatherDecalSettingsParameters.hpp"
UWeatherDecalSettingsParameters* UWeatherDecalSettingsParameters::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalSettingsParameters");
    return (UWeatherDecalSettingsParameters*)res;
}
