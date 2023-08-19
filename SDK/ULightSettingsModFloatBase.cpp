#include "ELightRigCurveColorConversionType.hpp"
#include "ULightSettingsModCurve.hpp"
#include "ULightSettingsModFloatBase.hpp"
ULightSettingsModFloatBase* ULightSettingsModFloatBase::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsModFloatBase");
    return (ULightSettingsModFloatBase*)res;
}
