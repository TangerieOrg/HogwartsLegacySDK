#include "FManualMoonSetup.hpp"
#include "UGlobalLightingBlendableDayNightBase.hpp"
#include "UGlobalLightingBlendableDayNightInheritMoon.hpp"
UGlobalLightingBlendableDayNightInheritMoon* UGlobalLightingBlendableDayNightInheritMoon::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.GlobalLightingBlendableDayNightInheritMoon");
    return (UGlobalLightingBlendableDayNightInheritMoon*)res;
}
