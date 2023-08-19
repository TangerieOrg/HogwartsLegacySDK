#include "FTimeInput.hpp"
#include "UEphemerisSubroutineGamifyTimeCurveBase.hpp"
#include "UEphemerisSubroutineGamifyTimeSunriseSunset.hpp"
UEphemerisSubroutineGamifyTimeSunriseSunset* UEphemerisSubroutineGamifyTimeSunriseSunset::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineGamifyTimeSunriseSunset");
    return (UEphemerisSubroutineGamifyTimeSunriseSunset*)res;
}
