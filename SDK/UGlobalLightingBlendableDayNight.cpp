#include "UGlobalLightingBlendableDayNight.hpp"
#include "UGlobalLightingBlendableDayNightBase.hpp"
UGlobalLightingBlendableDayNight* UGlobalLightingBlendableDayNight::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.GlobalLightingBlendableDayNight");
    return (UGlobalLightingBlendableDayNight*)res;
}
