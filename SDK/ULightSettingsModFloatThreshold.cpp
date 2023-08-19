#include "ULightSettingsModFloatBase.hpp"
#include "ULightSettingsModFloatThreshold.hpp"
#include "ULightSettingsModThreshold.hpp"
ULightSettingsModFloatThreshold* ULightSettingsModFloatThreshold::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsModFloatThreshold");
    return (ULightSettingsModFloatThreshold*)res;
}
