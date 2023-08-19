#include "FDayNightLightRigOverride.hpp"
#include "UDataAsset.hpp"
#include "ULightSettingsLerpControl.hpp"
#include "ULightSettingsModCurve.hpp"
#include "UNightLightRig.hpp"
UNightLightRig* UNightLightRig::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.NightLightRig");
    return (UNightLightRig*)res;
}
