#include "ULightSettingsModColorBase.hpp"
#include "ULightSettingsModCurve.hpp"
ULightSettingsModColorBase* ULightSettingsModColorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsModColorBase");
    return (ULightSettingsModColorBase*)res;
}
