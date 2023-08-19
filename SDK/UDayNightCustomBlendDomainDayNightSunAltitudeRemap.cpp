#include "UDayNightCustomBlendDomainDayNightAltitudeRemap.hpp"
#include "UDayNightCustomBlendDomainDayNightSunAltitudeRemap.hpp"
UDayNightCustomBlendDomainDayNightSunAltitudeRemap* UDayNightCustomBlendDomainDayNightSunAltitudeRemap::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCustomBlendDomainDayNightSunAltitudeRemap");
    return (UDayNightCustomBlendDomainDayNightSunAltitudeRemap*)res;
}
