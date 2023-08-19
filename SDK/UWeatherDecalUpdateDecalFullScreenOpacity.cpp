#include "UWeatherDecalUpdateDecalFullScreenOpacity.hpp"
#include "UWeatherDecalUpdateSingleParameterFlex.hpp"
UWeatherDecalUpdateDecalFullScreenOpacity* UWeatherDecalUpdateDecalFullScreenOpacity::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalUpdateDecalFullScreenOpacity");
    return (UWeatherDecalUpdateDecalFullScreenOpacity*)res;
}
