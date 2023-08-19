#include "FRotator.hpp"
#include "UEphemerisSubroutine.hpp"
#include "UEphemerisSubroutineSunPosition.hpp"
UEphemerisSubroutineSunPosition* UEphemerisSubroutineSunPosition::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineSunPosition");
    return (UEphemerisSubroutineSunPosition*)res;
}
