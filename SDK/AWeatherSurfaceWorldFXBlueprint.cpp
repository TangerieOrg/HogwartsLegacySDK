#include "AWeatherSurfaceBlueprintBase.hpp"
#include "AWeatherSurfaceWorldFXBlueprint.hpp"
AWeatherSurfaceWorldFXBlueprint* AWeatherSurfaceWorldFXBlueprint::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherSurfaceWorldFXBlueprint");
    return (AWeatherSurfaceWorldFXBlueprint*)res;
}
