#include "UTimeOverrideBase.hpp"
#include "UTimeOverrideDateTime.hpp"
UTimeOverrideDateTime* UTimeOverrideDateTime::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeOverrideDateTime");
    return (UTimeOverrideDateTime*)res;
}
