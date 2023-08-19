#include "UWeatherDecalPlacement.hpp"
#include "UWeatherDecalPlacementWorld.hpp"
UWeatherDecalPlacementWorld* UWeatherDecalPlacementWorld::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalPlacementWorld");
    return (UWeatherDecalPlacementWorld*)res;
}
