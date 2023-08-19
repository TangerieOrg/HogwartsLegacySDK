#include "UCurveFloat.hpp"
#include "UDayNightCustomBlendDomainDayNightAltitudeCurveRemap.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
UDayNightCustomBlendDomainDayNightAltitudeCurveRemap* UDayNightCustomBlendDomainDayNightAltitudeCurveRemap::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCustomBlendDomainDayNightAltitudeCurveRemap");
    return (UDayNightCustomBlendDomainDayNightAltitudeCurveRemap*)res;
}
