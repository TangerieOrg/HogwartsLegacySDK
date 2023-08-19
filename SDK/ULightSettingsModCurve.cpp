#include "EGlobalLightRigModParam.hpp"
#include "ELightRigCurveParam.hpp"
#include "ELightRigCurveType.hpp"
#include "ELightRigMode.hpp"
#include "ULightSettingsModCurve.hpp"
#include "UObject.hpp"
ULightSettingsModCurve* ULightSettingsModCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsModCurve");
    return (ULightSettingsModCurve*)res;
}
