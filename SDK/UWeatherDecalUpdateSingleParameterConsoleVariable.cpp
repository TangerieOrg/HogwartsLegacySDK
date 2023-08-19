#include "UWeatherDecalUpdateSingleParameterConsoleVariable.hpp"
#include "UWeatherDecalUpdateSingleParameterFlex.hpp"
UWeatherDecalUpdateSingleParameterConsoleVariable* UWeatherDecalUpdateSingleParameterConsoleVariable::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalUpdateSingleParameterConsoleVariable");
    return (UWeatherDecalUpdateSingleParameterConsoleVariable*)res;
}
