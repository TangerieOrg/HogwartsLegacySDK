#include "UDayNightCustomBlendDomainDayNightValid.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
UDayNightCustomBlendDomainDayNightValid* UDayNightCustomBlendDomainDayNightValid::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCustomBlendDomainDayNightValid");
    return (UDayNightCustomBlendDomainDayNightValid*)res;
}
