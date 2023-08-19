#include "UDayNightOverrideBasisInterface.hpp"
#include "UInterface.hpp"
UDayNightOverrideBasisInterface* UDayNightOverrideBasisInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightOverrideBasisInterface");
    return (UDayNightOverrideBasisInterface*)res;
}
