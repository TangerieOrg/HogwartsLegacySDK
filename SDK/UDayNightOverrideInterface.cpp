#include "UDayNightOverrideInterface.hpp"
#include "UInterface.hpp"
UDayNightOverrideInterface* UDayNightOverrideInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightOverrideInterface");
    return (UDayNightOverrideInterface*)res;
}
