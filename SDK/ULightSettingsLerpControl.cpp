#include "EGlobalLightRigModParam.hpp"
#include "ELightRigCurveParam.hpp"
#include "ULightSettingsLerpControl.hpp"
#include "UObject.hpp"
ULightSettingsLerpControl* ULightSettingsLerpControl::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsLerpControl");
    return (ULightSettingsLerpControl*)res;
}
