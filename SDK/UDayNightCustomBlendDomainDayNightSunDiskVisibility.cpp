#include "UDayNightCustomBlendDomainDayNightSunDiskVisibility.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
UDayNightCustomBlendDomainDayNightSunDiskVisibility* UDayNightCustomBlendDomainDayNightSunDiskVisibility::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCustomBlendDomainDayNightSunDiskVisibility");
    return (UDayNightCustomBlendDomainDayNightSunDiskVisibility*)res;
}
