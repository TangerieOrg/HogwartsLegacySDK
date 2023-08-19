#include "URenderSettingsCustomBlendDomain.hpp"
#include "UWeatherCustomBlendDomainWeatherCold.hpp"
UWeatherCustomBlendDomainWeatherCold* UWeatherCustomBlendDomainWeatherCold::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherCustomBlendDomainWeatherCold");
    return (UWeatherCustomBlendDomainWeatherCold*)res;
}
