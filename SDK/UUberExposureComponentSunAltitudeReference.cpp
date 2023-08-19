#include "UUberExposureComponentSunAltitude.hpp"
#include "UUberExposureComponentSunAltitudeReference.hpp"
UUberExposureComponentSunAltitudeReference* UUberExposureComponentSunAltitudeReference::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.UberExposureComponentSunAltitudeReference");
    return (UUberExposureComponentSunAltitudeReference*)res;
}
