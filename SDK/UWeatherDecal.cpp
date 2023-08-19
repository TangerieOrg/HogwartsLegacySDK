#include "UObject.hpp"
#include "UWeatherDecal.hpp"
UWeatherDecal* UWeatherDecal::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecal");
    return (UWeatherDecal*)res;
}
