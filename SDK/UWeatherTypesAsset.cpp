#include "UDataAsset.hpp"
#include "UMaterialParameterCollection.hpp"
#include "UNiagaraParameterCollection.hpp"
#include "UWeatherTypesAsset.hpp"
UWeatherTypesAsset* UWeatherTypesAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherTypesAsset");
    return (UWeatherTypesAsset*)res;
}
