#include "UDayNightCustomBlendDomainDayNightAltitudeRemap.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
UDayNightCustomBlendDomainDayNightAltitudeRemap* UDayNightCustomBlendDomainDayNightAltitudeRemap::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCustomBlendDomainDayNightAltitudeRemap");
    return (UDayNightCustomBlendDomainDayNightAltitudeRemap*)res;
}
