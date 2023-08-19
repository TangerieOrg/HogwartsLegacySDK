#include "FDateInput.hpp"
#include "UCurveFloat.hpp"
#include "UEphemerisSubroutine.hpp"
#include "UEphemerisSubroutineGamifyTime.hpp"
#include "UEphemerisSubroutineIdealSunPath.hpp"
UEphemerisSubroutineIdealSunPath* UEphemerisSubroutineIdealSunPath::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.EphemerisSubroutineIdealSunPath");
    return (UEphemerisSubroutineIdealSunPath*)res;
}
