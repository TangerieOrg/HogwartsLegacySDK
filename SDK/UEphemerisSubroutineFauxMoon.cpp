#include "FDateInput.hpp"
#include "UEphemerisSubroutine.hpp"
#include "UEphemerisSubroutineFauxMoon.hpp"
UEphemerisSubroutineFauxMoon* UEphemerisSubroutineFauxMoon::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineFauxMoon");
    return (UEphemerisSubroutineFauxMoon*)res;
}
