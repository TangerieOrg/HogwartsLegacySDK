#include "UWeatherDecalModifier.hpp"
#include "UWeatherDecalUpdate.hpp"
UWeatherDecalUpdate* UWeatherDecalUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalUpdate");
    return (UWeatherDecalUpdate*)res;
}
