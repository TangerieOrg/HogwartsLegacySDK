#include "FMoonPath.hpp"
#include "UEphemerisSubroutineDynamicIdealMoonPathData.hpp"
#include "UObject.hpp"
UEphemerisSubroutineDynamicIdealMoonPathData* UEphemerisSubroutineDynamicIdealMoonPathData::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineDynamicIdealMoonPathData");
    return (UEphemerisSubroutineDynamicIdealMoonPathData*)res;
}
