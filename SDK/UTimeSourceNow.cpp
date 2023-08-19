#include "UTimeSourceLocal.hpp"
#include "UTimeSourceNow.hpp"
UTimeSourceNow* UTimeSourceNow::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeSourceNow");
    return (UTimeSourceNow*)res;
}
