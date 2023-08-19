#include "UDEPRECATED_WeatherDecalDefinitions.hpp"
#include "UDataAsset.hpp"
#include "UWeatherDecal.hpp"
UDEPRECATED_WeatherDecalDefinitions* UDEPRECATED_WeatherDecalDefinitions::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalDefinitions");
    return (UDEPRECATED_WeatherDecalDefinitions*)res;
}
