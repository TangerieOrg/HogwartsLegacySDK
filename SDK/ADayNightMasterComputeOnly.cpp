#include "AActor.hpp"
#include "ADayNightMasterComputeOnly.hpp"
#include "UDayNightMasterComponent.hpp"
ADayNightMasterComputeOnly* ADayNightMasterComputeOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightMasterComputeOnly");
    return (ADayNightMasterComputeOnly*)res;
}
