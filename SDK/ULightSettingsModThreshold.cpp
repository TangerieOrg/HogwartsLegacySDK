#include "ULightSettingsModThreshold.hpp"
#include "UObject.hpp"
ULightSettingsModThreshold* ULightSettingsModThreshold::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsModThreshold");
    return (ULightSettingsModThreshold*)res;
}
