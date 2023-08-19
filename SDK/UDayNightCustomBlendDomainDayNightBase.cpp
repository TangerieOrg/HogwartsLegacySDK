#include "UDayNightCustomBlendDomainDayNightBase.hpp"
#include "URenderSettingsCustomBlendDomainBase.hpp"
UDayNightCustomBlendDomainDayNightBase* UDayNightCustomBlendDomainDayNightBase::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCustomBlendDomainDayNightBase");
    return (UDayNightCustomBlendDomainDayNightBase*)res;
}
