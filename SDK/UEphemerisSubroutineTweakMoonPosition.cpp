#include "UEphemerisSubroutineTweakDirection.hpp"
#include "UEphemerisSubroutineTweakMoonPosition.hpp"
UEphemerisSubroutineTweakMoonPosition* UEphemerisSubroutineTweakMoonPosition::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineTweakMoonPosition");
    return (UEphemerisSubroutineTweakMoonPosition*)res;
}
