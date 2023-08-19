#include "AActor.hpp"
#include "AWeatherDecalPlacementActor.hpp"
AWeatherDecalPlacementActor* AWeatherDecalPlacementActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalPlacementActor");
    return (AWeatherDecalPlacementActor*)res;
}
