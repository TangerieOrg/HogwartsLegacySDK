#include "UDayNightCustomBlendDomainNormalizedTime.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
UDayNightCustomBlendDomainNormalizedTime* UDayNightCustomBlendDomainNormalizedTime::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCustomBlendDomainNormalizedTime");
    return (UDayNightCustomBlendDomainNormalizedTime*)res;
}
