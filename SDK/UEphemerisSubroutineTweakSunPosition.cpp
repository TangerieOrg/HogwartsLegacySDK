#include "UEphemerisSubroutineTweakDirection.hpp"
#include "UEphemerisSubroutineTweakSunPosition.hpp"
UEphemerisSubroutineTweakSunPosition* UEphemerisSubroutineTweakSunPosition::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineTweakSunPosition");
    return (UEphemerisSubroutineTweakSunPosition*)res;
}
