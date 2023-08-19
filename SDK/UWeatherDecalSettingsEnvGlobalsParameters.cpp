#include "UWeatherDecalSettingsEnvGlobalsParameters.hpp"
#include "UWeatherDecalSettingsParameters.hpp"
UWeatherDecalSettingsEnvGlobalsParameters* UWeatherDecalSettingsEnvGlobalsParameters::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalSettingsEnvGlobalsParameters");
    return (UWeatherDecalSettingsEnvGlobalsParameters*)res;
}
