#include "UWeatherDecalConditionSeasons.hpp"
#include "UWeatherDecalSimpleCondition.hpp"
UWeatherDecalConditionSeasons* UWeatherDecalConditionSeasons::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalConditionSeasons");
    return (UWeatherDecalConditionSeasons*)res;
}
