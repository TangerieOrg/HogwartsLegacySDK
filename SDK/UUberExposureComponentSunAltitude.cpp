#include "UUberExposureComponentConstDriver.hpp"
#include "UUberExposureComponentSunAltitude.hpp"
UUberExposureComponentSunAltitude* UUberExposureComponentSunAltitude::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.UberExposureComponentSunAltitude");
    return (UUberExposureComponentSunAltitude*)res;
}
