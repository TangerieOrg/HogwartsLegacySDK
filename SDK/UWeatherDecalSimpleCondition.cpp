#include "UWeatherDecalCondition.hpp"
#include "UWeatherDecalSimpleCondition.hpp"
UWeatherDecalSimpleCondition* UWeatherDecalSimpleCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalSimpleCondition");
    return (UWeatherDecalSimpleCondition*)res;
}
