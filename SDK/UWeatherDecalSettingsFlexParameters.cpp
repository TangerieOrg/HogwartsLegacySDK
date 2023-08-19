#include "UMaterialParameterCollection.hpp"
#include "UNiagaraParameterCollection.hpp"
#include "UWeatherDecalSettingsFlexParameters.hpp"
#include "UWeatherDecalSettingsParameters.hpp"
UWeatherDecalSettingsFlexParameters* UWeatherDecalSettingsFlexParameters::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalSettingsFlexParameters");
    return (UWeatherDecalSettingsFlexParameters*)res;
}
