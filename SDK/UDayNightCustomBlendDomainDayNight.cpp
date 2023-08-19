#include "UDayNightCustomBlendDomainDayNight.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
UDayNightCustomBlendDomainDayNight* UDayNightCustomBlendDomainDayNight::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCustomBlendDomainDayNight");
    return (UDayNightCustomBlendDomainDayNight*)res;
}
