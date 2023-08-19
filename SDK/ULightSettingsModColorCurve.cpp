#include "ELightRigCurveLinearColorType.hpp"
#include "UCurveLinearColor.hpp"
#include "ULightSettingsModColorBase.hpp"
#include "ULightSettingsModColorCurve.hpp"
ULightSettingsModColorCurve* ULightSettingsModColorCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsModColorCurve");
    return (ULightSettingsModColorCurve*)res;
}
