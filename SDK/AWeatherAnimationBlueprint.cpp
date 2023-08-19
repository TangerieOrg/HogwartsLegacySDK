#include "AWeatherAnimationBlueprint.hpp"
#include "AWeatherSurfaceBlueprintBase.hpp"
AWeatherAnimationBlueprint* AWeatherAnimationBlueprint::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherAnimationBlueprint");
    return (AWeatherAnimationBlueprint*)res;
}
