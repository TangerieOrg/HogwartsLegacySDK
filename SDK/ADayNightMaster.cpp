#include "AActor.hpp"
#include "ADayNightMaster.hpp"
#include "UDayNightMasterComponent.hpp"
ADayNightMaster* ADayNightMaster::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightMaster");
    return (ADayNightMaster*)res;
}
