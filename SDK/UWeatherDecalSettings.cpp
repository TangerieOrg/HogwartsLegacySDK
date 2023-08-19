#include "UWeatherDecalModifier.hpp"
#include "UWeatherDecalSettings.hpp"
UWeatherDecalSettings* UWeatherDecalSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalSettings");
    return (UWeatherDecalSettings*)res;
}
