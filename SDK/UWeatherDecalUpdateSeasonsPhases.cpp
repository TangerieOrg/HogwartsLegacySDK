#include "UWeatherDecalSettings.hpp"
#include "UWeatherDecalUpdate.hpp"
#include "UWeatherDecalUpdateSeasonsPhases.hpp"
UWeatherDecalUpdateSeasonsPhases* UWeatherDecalUpdateSeasonsPhases::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalUpdateSeasonsPhases");
    return (UWeatherDecalUpdateSeasonsPhases*)res;
}
