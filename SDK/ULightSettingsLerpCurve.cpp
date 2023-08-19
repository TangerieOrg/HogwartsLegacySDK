#include "UCurveFloat.hpp"
#include "ULightSettingsLerpControl.hpp"
#include "ULightSettingsLerpCurve.hpp"
ULightSettingsLerpCurve* ULightSettingsLerpCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsLerpCurve");
    return (ULightSettingsLerpCurve*)res;
}
