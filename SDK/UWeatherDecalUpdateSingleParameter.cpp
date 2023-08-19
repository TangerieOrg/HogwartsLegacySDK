#include "UWeatherDecalUpdate.hpp"
#include "UWeatherDecalUpdateSingleParameter.hpp"
UWeatherDecalUpdateSingleParameter* UWeatherDecalUpdateSingleParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalUpdateSingleParameter");
    return (UWeatherDecalUpdateSingleParameter*)res;
}
