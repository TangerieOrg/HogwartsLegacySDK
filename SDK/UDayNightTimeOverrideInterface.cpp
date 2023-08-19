#include "UDayNightTimeOverrideInterface.hpp"
#include "UInterface.hpp"
UDayNightTimeOverrideInterface* UDayNightTimeOverrideInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightTimeOverrideInterface");
    return (UDayNightTimeOverrideInterface*)res;
}
