#include "UDataAsset.hpp"
#include "UWeatherDefinitions.hpp"
UWeatherDefinitions* UWeatherDefinitions::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDefinitions");
    return (UWeatherDefinitions*)res;
}
