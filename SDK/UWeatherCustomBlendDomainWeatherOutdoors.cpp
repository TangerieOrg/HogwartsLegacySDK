#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "UWeatherCustomBlendDomainWeatherOutdoors.hpp"
UWeatherCustomBlendDomainWeatherOutdoors* UWeatherCustomBlendDomainWeatherOutdoors::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherCustomBlendDomainWeatherOutdoors");
    return (UWeatherCustomBlendDomainWeatherOutdoors*)res;
}
