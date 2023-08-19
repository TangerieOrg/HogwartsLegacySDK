#include "FManualMoonSetup.hpp"
#include "UEphemerisSubroutine.hpp"
#include "UEphemerisSubroutineForceMoonPhase.hpp"
UEphemerisSubroutineForceMoonPhase* UEphemerisSubroutineForceMoonPhase::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineForceMoonPhase");
    return (UEphemerisSubroutineForceMoonPhase*)res;
}
