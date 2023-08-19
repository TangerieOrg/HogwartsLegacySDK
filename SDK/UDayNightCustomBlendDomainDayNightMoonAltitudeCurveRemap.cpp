#include "UDayNightCustomBlendDomainDayNightAltitudeCurveRemap.hpp"
#include "UDayNightCustomBlendDomainDayNightMoonAltitudeCurveRemap.hpp"
UDayNightCustomBlendDomainDayNightMoonAltitudeCurveRemap* UDayNightCustomBlendDomainDayNightMoonAltitudeCurveRemap::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCustomBlendDomainDayNightMoonAltitudeCurveRemap");
    return (UDayNightCustomBlendDomainDayNightMoonAltitudeCurveRemap*)res;
}
