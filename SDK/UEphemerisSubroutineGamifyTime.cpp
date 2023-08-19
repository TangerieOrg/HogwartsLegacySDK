#include "UEphemerisSubroutineGamifyTime.hpp"
#include "UObject.hpp"
UEphemerisSubroutineGamifyTime* UEphemerisSubroutineGamifyTime::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineGamifyTime");
    return (UEphemerisSubroutineGamifyTime*)res;
}
