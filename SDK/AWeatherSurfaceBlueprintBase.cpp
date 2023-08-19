#include "AActor.hpp"
#include "AWeatherSurfaceBlueprintBase.hpp"
#include "FWeatherStormState.hpp"
AWeatherSurfaceBlueprintBase* AWeatherSurfaceBlueprintBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherSurfaceBlueprintBase");
    return (AWeatherSurfaceBlueprintBase*)res;
}
