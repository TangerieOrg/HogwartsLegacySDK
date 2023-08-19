#include "UDataAsset.hpp"
#include "UWorldWeatherDecal.hpp"
#include "UWorldWeatherDecalDefinitions.hpp"
UWorldWeatherDecalDefinitions* UWorldWeatherDecalDefinitions::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WorldWeatherDecalDefinitions");
    return (UWorldWeatherDecalDefinitions*)res;
}
