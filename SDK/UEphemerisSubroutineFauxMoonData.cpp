#include "FEphemerisDayInfo.hpp"
#include "UEphemerisSubroutineFauxMoonData.hpp"
#include "UObject.hpp"
UEphemerisSubroutineFauxMoonData* UEphemerisSubroutineFauxMoonData::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineFauxMoonData");
    return (UEphemerisSubroutineFauxMoonData*)res;
}
