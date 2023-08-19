#include "URenderSettingsCustomBlendDomainBase.hpp"
#include "UWeatherCustomBlendDomainBase.hpp"
UWeatherCustomBlendDomainBase* UWeatherCustomBlendDomainBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherCustomBlendDomainBase");
    return (UWeatherCustomBlendDomainBase*)res;
}
