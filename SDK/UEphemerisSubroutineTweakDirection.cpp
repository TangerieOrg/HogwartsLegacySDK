#include "UCurveFloat.hpp"
#include "UEphemerisSubroutine.hpp"
#include "UEphemerisSubroutineTweakDirection.hpp"
UEphemerisSubroutineTweakDirection* UEphemerisSubroutineTweakDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineTweakDirection");
    return (UEphemerisSubroutineTweakDirection*)res;
}
