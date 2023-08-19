#include "ELightRigCurveLinearColorType.hpp"
#include "FLinearColor.hpp"
#include "ULightSettingsModColorBase.hpp"
#include "ULightSettingsModColorConstant.hpp"
ULightSettingsModColorConstant* ULightSettingsModColorConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsModColorConstant");
    return (ULightSettingsModColorConstant*)res;
}
