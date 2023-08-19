#include "UDayNightCustomBlendDomainDayNightAltitudeRemap.hpp"
#include "UDayNightCustomBlendDomainDayNightMoonAltitudeRemap.hpp"
UDayNightCustomBlendDomainDayNightMoonAltitudeRemap* UDayNightCustomBlendDomainDayNightMoonAltitudeRemap::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCustomBlendDomainDayNightMoonAltitudeRemap");
    return (UDayNightCustomBlendDomainDayNightMoonAltitudeRemap*)res;
}
