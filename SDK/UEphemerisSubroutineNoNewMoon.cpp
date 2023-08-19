#include "UEphemerisSubroutine.hpp"
#include "UEphemerisSubroutineNoNewMoon.hpp"
UEphemerisSubroutineNoNewMoon* UEphemerisSubroutineNoNewMoon::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineNoNewMoon");
    return (UEphemerisSubroutineNoNewMoon*)res;
}
