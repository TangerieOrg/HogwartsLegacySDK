#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "UWeatherCustomBlendDomainOvercast.hpp"
UWeatherCustomBlendDomainOvercast* UWeatherCustomBlendDomainOvercast::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherCustomBlendDomainOvercast");
    return (UWeatherCustomBlendDomainOvercast*)res;
}
