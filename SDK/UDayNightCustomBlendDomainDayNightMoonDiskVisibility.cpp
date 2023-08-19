#include "UDayNightCustomBlendDomainDayNightMoonDiskVisibility.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
UDayNightCustomBlendDomainDayNightMoonDiskVisibility* UDayNightCustomBlendDomainDayNightMoonDiskVisibility::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCustomBlendDomainDayNightMoonDiskVisibility");
    return (UDayNightCustomBlendDomainDayNightMoonDiskVisibility*)res;
}
