#include "UObject.hpp"
#include "UTimeSource.hpp"
UTimeSource* UTimeSource::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeSource");
    return (UTimeSource*)res;
}
