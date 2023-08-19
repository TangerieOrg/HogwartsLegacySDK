#include "UGlobalLightingBlendableBase.hpp"
#include "UGlobalLightingBlendableDayNightSky.hpp"
UGlobalLightingBlendableDayNightSky* UGlobalLightingBlendableDayNightSky::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.GlobalLightingBlendableDayNightSky");
    return (UGlobalLightingBlendableDayNightSky*)res;
}
