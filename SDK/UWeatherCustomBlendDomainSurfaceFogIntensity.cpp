#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "UWeatherCustomBlendDomainSurfaceFogIntensity.hpp"
UWeatherCustomBlendDomainSurfaceFogIntensity* UWeatherCustomBlendDomainSurfaceFogIntensity::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherCustomBlendDomainSurfaceFogIntensity");
    return (UWeatherCustomBlendDomainSurfaceFogIntensity*)res;
}
