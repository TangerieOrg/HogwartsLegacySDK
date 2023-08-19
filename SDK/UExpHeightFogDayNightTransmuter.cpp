#include "UDayNightExpHeightFogAdjustments.hpp"
#include "UExpHeightFogDayNightTransmuter.hpp"
#include "UExpHeightFogTransmuter.hpp"
UExpHeightFogDayNightTransmuter* UExpHeightFogDayNightTransmuter::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.ExpHeightFogDayNightTransmuter");
    return (UExpHeightFogDayNightTransmuter*)res;
}
