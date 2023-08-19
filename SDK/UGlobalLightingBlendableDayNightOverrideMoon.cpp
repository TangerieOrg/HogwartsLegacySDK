#include "FManualMoonSetup.hpp"
#include "UGlobalLightingBlendableDayNightBase.hpp"
#include "UGlobalLightingBlendableDayNightOverrideMoon.hpp"
UGlobalLightingBlendableDayNightOverrideMoon* UGlobalLightingBlendableDayNightOverrideMoon::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.GlobalLightingBlendableDayNightOverrideMoon");
    return (UGlobalLightingBlendableDayNightOverrideMoon*)res;
}
