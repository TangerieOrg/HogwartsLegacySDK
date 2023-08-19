#include "UWeatherRemapBase.hpp"
#include "UWeatherRemapSnow.hpp"
UWeatherRemapSnow* UWeatherRemapSnow::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WeatherRemapSnow");
    return (UWeatherRemapSnow*)res;
}
