#include "FRuntimeFloatCurve.hpp"
#include "UEphemerisSubroutineGamifyTime.hpp"
#include "UEphemerisSubroutineGamifyTimeCurveBase.hpp"
UEphemerisSubroutineGamifyTimeCurveBase* UEphemerisSubroutineGamifyTimeCurveBase::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineGamifyTimeCurveBase");
    return (UEphemerisSubroutineGamifyTimeCurveBase*)res;
}
