#include "UWeatherRemapBase.hpp"
#include "UWeatherRemapRain.hpp"
UWeatherRemapRain* UWeatherRemapRain::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WeatherRemapRain");
    return (UWeatherRemapRain*)res;
}
