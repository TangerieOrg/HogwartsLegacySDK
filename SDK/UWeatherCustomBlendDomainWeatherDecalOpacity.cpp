#include "URenderSettingsNamedCustomBlendDomain.hpp"
#include "UWeatherCustomBlendDomainWeatherDecalOpacity.hpp"
UWeatherCustomBlendDomainWeatherDecalOpacity* UWeatherCustomBlendDomainWeatherDecalOpacity::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherCustomBlendDomainWeatherDecalOpacity");
    return (UWeatherCustomBlendDomainWeatherDecalOpacity*)res;
}
