#include "UWeatherDecalUpdateFlexBlend.hpp"
#include "UWeatherDecalUpdateSingleParameterFlex.hpp"
UWeatherDecalUpdateFlexBlend* UWeatherDecalUpdateFlexBlend::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalUpdateFlexBlend");
    return (UWeatherDecalUpdateFlexBlend*)res;
}
