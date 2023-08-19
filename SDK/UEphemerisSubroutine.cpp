#include "UEphemerisSubroutine.hpp"
#include "UObject.hpp"
UEphemerisSubroutine* UEphemerisSubroutine::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutine");
    return (UEphemerisSubroutine*)res;
}
