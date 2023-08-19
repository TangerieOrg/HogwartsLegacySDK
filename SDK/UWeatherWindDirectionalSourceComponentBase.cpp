#include "UWeatherWindDirectionalSourceComponentBase.hpp"
#include "UWindSourceComponentBase.hpp"
UWeatherWindDirectionalSourceComponentBase* UWeatherWindDirectionalSourceComponentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherWindDirectionalSourceComponentBase");
    return (UWeatherWindDirectionalSourceComponentBase*)res;
}
