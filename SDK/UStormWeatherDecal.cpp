#include "UStormWeatherDecal.hpp"
#include "UWeatherDecal.hpp"
UStormWeatherDecal* UStormWeatherDecal::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.StormWeatherDecal");
    return (UStormWeatherDecal*)res;
}
