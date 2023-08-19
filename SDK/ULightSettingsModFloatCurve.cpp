#include "UCurveFloat.hpp"
#include "ULightSettingsModFloatBase.hpp"
#include "ULightSettingsModFloatCurve.hpp"
ULightSettingsModFloatCurve* ULightSettingsModFloatCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsModFloatCurve");
    return (ULightSettingsModFloatCurve*)res;
}
