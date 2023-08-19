#include "UEphemerisSubroutine.hpp"
#include "UEphemerisSubroutineAstronomical.hpp"
UEphemerisSubroutineAstronomical* UEphemerisSubroutineAstronomical::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineAstronomical");
    return (UEphemerisSubroutineAstronomical*)res;
}
