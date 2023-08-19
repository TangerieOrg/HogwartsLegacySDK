#include "FDayNightLightRigSetup.hpp"
#include "UDataAsset.hpp"
#include "UDayLightRig.hpp"
#include "ULightSettingsModCurve.hpp"
UDayLightRig* UDayLightRig::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayLightRig");
    return (UDayLightRig*)res;
}
