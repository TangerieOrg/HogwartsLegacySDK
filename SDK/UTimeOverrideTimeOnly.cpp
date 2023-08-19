#include "UTimeOverrideBase.hpp"
#include "UTimeOverrideTimeOnly.hpp"
UTimeOverrideTimeOnly* UTimeOverrideTimeOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeOverrideTimeOnly");
    return (UTimeOverrideTimeOnly*)res;
}
