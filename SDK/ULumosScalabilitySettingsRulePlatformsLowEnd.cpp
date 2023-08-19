#include "ULumosScalabilitySettingsRule.hpp"
#include "ULumosScalabilitySettingsRulePlatformsLowEnd.hpp"
ULumosScalabilitySettingsRulePlatformsLowEnd* ULumosScalabilitySettingsRulePlatformsLowEnd::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRulePlatformsLowEnd");
    return (ULumosScalabilitySettingsRulePlatformsLowEnd*)res;
}
