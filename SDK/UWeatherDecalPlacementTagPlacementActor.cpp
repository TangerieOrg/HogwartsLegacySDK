#include "UWeatherDecalPlacement.hpp"
#include "UWeatherDecalPlacementTagPlacementActor.hpp"
UWeatherDecalPlacementTagPlacementActor* UWeatherDecalPlacementTagPlacementActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalPlacementTagPlacementActor");
    return (UWeatherDecalPlacementTagPlacementActor*)res;
}
