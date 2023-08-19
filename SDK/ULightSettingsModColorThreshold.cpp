#include "ELightRigCurveLinearColorType.hpp"
#include "FLinearColor.hpp"
#include "ULightSettingsModColorBase.hpp"
#include "ULightSettingsModColorThreshold.hpp"
#include "ULightSettingsModThreshold.hpp"
ULightSettingsModColorThreshold* ULightSettingsModColorThreshold::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsModColorThreshold");
    return (ULightSettingsModColorThreshold*)res;
}
