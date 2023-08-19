#include "UMaterialParameterCollection.hpp"
#include "UNiagaraParameterCollection.hpp"
#include "UWeatherDecalUpdateSingleParameter.hpp"
#include "UWeatherDecalUpdateSingleParameterFlex.hpp"
UWeatherDecalUpdateSingleParameterFlex* UWeatherDecalUpdateSingleParameterFlex::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalUpdateSingleParameterFlex");
    return (UWeatherDecalUpdateSingleParameterFlex*)res;
}
