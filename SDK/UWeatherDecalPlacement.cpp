#include "UObject.hpp"
#include "UWeatherDecalPlacement.hpp"
UWeatherDecalPlacement* UWeatherDecalPlacement::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalPlacement");
    return (UWeatherDecalPlacement*)res;
}
