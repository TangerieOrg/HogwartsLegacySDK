#include "ELerpEasingType.hpp"
#include "ULightSettingsEase.hpp"
#include "ULightSettingsLerpControl.hpp"
ULightSettingsEase* ULightSettingsEase::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsEase");
    return (ULightSettingsEase*)res;
}
