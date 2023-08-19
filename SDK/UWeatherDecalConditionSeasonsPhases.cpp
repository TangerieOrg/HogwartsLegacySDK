#include "UWeatherDecalCondition.hpp"
#include "UWeatherDecalConditionSeasonsPhases.hpp"
UWeatherDecalConditionSeasonsPhases* UWeatherDecalConditionSeasonsPhases::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalConditionSeasonsPhases");
    return (UWeatherDecalConditionSeasonsPhases*)res;
}
