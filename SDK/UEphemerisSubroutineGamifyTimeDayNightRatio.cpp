#include "UEphemerisSubroutineGamifyTimeCurveBase.hpp"
#include "UEphemerisSubroutineGamifyTimeDayNightRatio.hpp"
UEphemerisSubroutineGamifyTimeDayNightRatio* UEphemerisSubroutineGamifyTimeDayNightRatio::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineGamifyTimeDayNightRatio");
    return (UEphemerisSubroutineGamifyTimeDayNightRatio*)res;
}
