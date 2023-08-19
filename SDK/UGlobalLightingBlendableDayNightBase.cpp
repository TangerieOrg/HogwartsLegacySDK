#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableDayNightBase.hpp"
UGlobalLightingBlendableDayNightBase* UGlobalLightingBlendableDayNightBase::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.GlobalLightingBlendableDayNightBase");
    return (UGlobalLightingBlendableDayNightBase*)res;
}
