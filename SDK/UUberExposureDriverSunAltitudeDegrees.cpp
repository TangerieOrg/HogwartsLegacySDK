#include "UUberExposureDriver.hpp"
#include "UUberExposureDriverSunAltitudeDegrees.hpp"
UUberExposureDriverSunAltitudeDegrees* UUberExposureDriverSunAltitudeDegrees::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.UberExposureDriverSunAltitudeDegrees");
    return (UUberExposureDriverSunAltitudeDegrees*)res;
}
