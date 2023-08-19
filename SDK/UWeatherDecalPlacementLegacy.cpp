#include "FVector.hpp"
#include "UWeatherDecalPlacement.hpp"
#include "UWeatherDecalPlacementLegacy.hpp"
UWeatherDecalPlacementLegacy* UWeatherDecalPlacementLegacy::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalPlacementLegacy");
    return (UWeatherDecalPlacementLegacy*)res;
}
