#include "UDayNightSkyStateOverrideInterface.hpp"
#include "UInterface.hpp"
UDayNightSkyStateOverrideInterface* UDayNightSkyStateOverrideInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightSkyStateOverrideInterface");
    return (UDayNightSkyStateOverrideInterface*)res;
}
