#include "FSolarDay.hpp"
#include "UEphemerisSubroutineIdealSunPathData.hpp"
#include "UObject.hpp"
UEphemerisSubroutineIdealSunPathData* UEphemerisSubroutineIdealSunPathData::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineIdealSunPathData");
    return (UEphemerisSubroutineIdealSunPathData*)res;
}
