#include "UWeatherDecalUpdate.hpp"
#include "UWeatherDecalUpdateZOffset.hpp"
UWeatherDecalUpdateZOffset* UWeatherDecalUpdateZOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalUpdateZOffset");
    return (UWeatherDecalUpdateZOffset*)res;
}
