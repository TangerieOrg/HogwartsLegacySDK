#include "UEphemerisSubroutine.hpp"
#include "UEphemerisSubroutineFixedSunPositions.hpp"
#include "UFixedSunPositions.hpp"
UEphemerisSubroutineFixedSunPositions* UEphemerisSubroutineFixedSunPositions::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineFixedSunPositions");
    return (UEphemerisSubroutineFixedSunPositions*)res;
}
