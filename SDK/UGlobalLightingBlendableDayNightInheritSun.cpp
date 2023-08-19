#include "EDayNightInheritSunMode.hpp"
#include "UGlobalLightingBlendableDayNightBase.hpp"
#include "UGlobalLightingBlendableDayNightInheritSun.hpp"
UGlobalLightingBlendableDayNightInheritSun* UGlobalLightingBlendableDayNightInheritSun::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.GlobalLightingBlendableDayNightInheritSun");
    return (UGlobalLightingBlendableDayNightInheritSun*)res;
}
