#include "FRotator.hpp"
#include "UEphemerisSubroutine.hpp"
#include "UEphemerisSubroutineMoonPosition.hpp"
UEphemerisSubroutineMoonPosition* UEphemerisSubroutineMoonPosition::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineMoonPosition");
    return (UEphemerisSubroutineMoonPosition*)res;
}
