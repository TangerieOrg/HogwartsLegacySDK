#include "UDayNightCustomBlendDomainDay.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
UDayNightCustomBlendDomainDay* UDayNightCustomBlendDomainDay::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCustomBlendDomainDay");
    return (UDayNightCustomBlendDomainDay*)res;
}
