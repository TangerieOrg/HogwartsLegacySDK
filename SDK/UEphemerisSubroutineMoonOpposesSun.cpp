#include "UEphemerisSubroutine.hpp"
#include "UEphemerisSubroutineMoonOpposesSun.hpp"
UEphemerisSubroutineMoonOpposesSun* UEphemerisSubroutineMoonOpposesSun::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineMoonOpposesSun");
    return (UEphemerisSubroutineMoonOpposesSun*)res;
}
