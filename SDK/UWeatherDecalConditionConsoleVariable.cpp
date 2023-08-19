#include "UWeatherDecalConditionConsoleVariable.hpp"
#include "UWeatherDecalSimpleCondition.hpp"
UWeatherDecalConditionConsoleVariable* UWeatherDecalConditionConsoleVariable::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalConditionConsoleVariable");
    return (UWeatherDecalConditionConsoleVariable*)res;
}
