#include "UDayNightCustomBlendDomainDayNightAltitudeCurveRemap.hpp"
#include "UDayNightCustomBlendDomainDayNightSunAltitudeCurveRemap.hpp"
UDayNightCustomBlendDomainDayNightSunAltitudeCurveRemap* UDayNightCustomBlendDomainDayNightSunAltitudeCurveRemap::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCustomBlendDomainDayNightSunAltitudeCurveRemap");
    return (UDayNightCustomBlendDomainDayNightSunAltitudeCurveRemap*)res;
}
