#include "UObject.hpp"
#include "UWeatherDecalModifier.hpp"
UWeatherDecalModifier* UWeatherDecalModifier::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalModifier");
    return (UWeatherDecalModifier*)res;
}
