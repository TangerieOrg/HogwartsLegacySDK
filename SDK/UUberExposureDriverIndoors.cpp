#include "UUberExposureDriver.hpp"
#include "UUberExposureDriverIndoors.hpp"
UUberExposureDriverIndoors* UUberExposureDriverIndoors::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.UberExposureDriverIndoors");
    return (UUberExposureDriverIndoors*)res;
}
