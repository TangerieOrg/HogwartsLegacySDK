#include "UWeatherDecalConditionConsoleVariable.hpp"
#include "UWeatherDecalConditionOneMinusConsoleVariable.hpp"
UWeatherDecalConditionOneMinusConsoleVariable* UWeatherDecalConditionOneMinusConsoleVariable::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalConditionOneMinusConsoleVariable");
    return (UWeatherDecalConditionOneMinusConsoleVariable*)res;
}
