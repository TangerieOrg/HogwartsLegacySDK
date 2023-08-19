#include "AWeatherCoverageBlueprint.hpp"
#include "AWeatherSurfaceBlueprintBase.hpp"
AWeatherCoverageBlueprint* AWeatherCoverageBlueprint::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherCoverageBlueprint");
    return (AWeatherCoverageBlueprint*)res;
}
