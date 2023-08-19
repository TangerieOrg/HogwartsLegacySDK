#include "EMoonPathMode.hpp"
#include "UEphemerisSubroutine.hpp"
#include "UEphemerisSubroutineFixedIdealMoonPath.hpp"
#include "UFixedIdealMoonPathData.hpp"
UEphemerisSubroutineFixedIdealMoonPath* UEphemerisSubroutineFixedIdealMoonPath::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineFixedIdealMoonPath");
    return (UEphemerisSubroutineFixedIdealMoonPath*)res;
}
