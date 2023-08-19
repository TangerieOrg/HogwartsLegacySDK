#include "FDateInput.hpp"
#include "UUberExposureDriver.hpp"
#include "UUberExposureDriverNormalizedTime.hpp"
UUberExposureDriverNormalizedTime* UUberExposureDriverNormalizedTime::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.UberExposureDriverNormalizedTime");
    return (UUberExposureDriverNormalizedTime*)res;
}
