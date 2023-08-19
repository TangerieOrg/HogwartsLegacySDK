#include "URenderSettingsNamedCustomBlendDomain.hpp"
#include "UWeatherCustomBlendDomainWeatherIndoorsBase.hpp"
UWeatherCustomBlendDomainWeatherIndoorsBase* UWeatherCustomBlendDomainWeatherIndoorsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherCustomBlendDomainWeatherIndoorsBase");
    return (UWeatherCustomBlendDomainWeatherIndoorsBase*)res;
}
