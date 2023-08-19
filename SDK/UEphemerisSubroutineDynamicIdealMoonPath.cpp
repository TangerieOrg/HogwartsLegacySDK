#include "EMoonPathMode.hpp"
#include "FMoonPathSettings.hpp"
#include "UEphemerisSubroutine.hpp"
#include "UEphemerisSubroutineDynamicIdealMoonPath.hpp"
UEphemerisSubroutineDynamicIdealMoonPath* UEphemerisSubroutineDynamicIdealMoonPath::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineDynamicIdealMoonPath");
    return (UEphemerisSubroutineDynamicIdealMoonPath*)res;
}
