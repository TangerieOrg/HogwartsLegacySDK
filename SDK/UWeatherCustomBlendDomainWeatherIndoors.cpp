#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "UWeatherCustomBlendDomainWeatherIndoors.hpp"
UWeatherCustomBlendDomainWeatherIndoors* UWeatherCustomBlendDomainWeatherIndoors::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherCustomBlendDomainWeatherIndoors");
    return (UWeatherCustomBlendDomainWeatherIndoors*)res;
}
