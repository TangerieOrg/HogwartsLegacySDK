#include "ULightSettingsModFloatBase.hpp"
#include "ULightSettingsModFloatConstant.hpp"
ULightSettingsModFloatConstant* ULightSettingsModFloatConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsModFloatConstant");
    return (ULightSettingsModFloatConstant*)res;
}
