#include "UUberExposureComponentConstDriver.hpp"
#include "UUberExposureComponentNormalizedTime.hpp"
UUberExposureComponentNormalizedTime* UUberExposureComponentNormalizedTime::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.UberExposureComponentNormalizedTime");
    return (UUberExposureComponentNormalizedTime*)res;
}
