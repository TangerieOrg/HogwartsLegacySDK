#include "UDataAsset.hpp"
#include "UDayNightExpHeightFogAdjustments.hpp"
#include "ULightSettingsModCurve.hpp"
UDayNightExpHeightFogAdjustments* UDayNightExpHeightFogAdjustments::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightExpHeightFogAdjustments");
    return (UDayNightExpHeightFogAdjustments*)res;
}
