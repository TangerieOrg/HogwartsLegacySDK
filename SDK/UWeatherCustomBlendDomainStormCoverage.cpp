#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "UWeatherCustomBlendDomainStormCoverage.hpp"
UWeatherCustomBlendDomainStormCoverage* UWeatherCustomBlendDomainStormCoverage::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherCustomBlendDomainStormCoverage");
    return (UWeatherCustomBlendDomainStormCoverage*)res;
}
