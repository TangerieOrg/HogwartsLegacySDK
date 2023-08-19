#include "UCurveFloat.hpp"
#include "UDayNightCustomBlendDomainDayNightNormalizedTimeCurve.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
UDayNightCustomBlendDomainDayNightNormalizedTimeCurve* UDayNightCustomBlendDomainDayNightNormalizedTimeCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCustomBlendDomainDayNightNormalizedTimeCurve");
    return (UDayNightCustomBlendDomainDayNightNormalizedTimeCurve*)res;
}
