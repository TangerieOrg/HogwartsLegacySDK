#include "UObject.hpp"
#include "UWeatherDecalCondition.hpp"
UWeatherDecalCondition* UWeatherDecalCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalCondition");
    return (UWeatherDecalCondition*)res;
}
