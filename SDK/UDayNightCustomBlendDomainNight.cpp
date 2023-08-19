#include "UDayNightCustomBlendDomainNight.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
UDayNightCustomBlendDomainNight* UDayNightCustomBlendDomainNight::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCustomBlendDomainNight");
    return (UDayNightCustomBlendDomainNight*)res;
}
