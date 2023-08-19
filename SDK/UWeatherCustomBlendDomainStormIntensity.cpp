#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "UWeatherCustomBlendDomainStormIntensity.hpp"
UWeatherCustomBlendDomainStormIntensity* UWeatherCustomBlendDomainStormIntensity::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherCustomBlendDomainStormIntensity");
    return (UWeatherCustomBlendDomainStormIntensity*)res;
}
