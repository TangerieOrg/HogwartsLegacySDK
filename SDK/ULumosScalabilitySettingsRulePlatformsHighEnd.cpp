#include "ULumosScalabilitySettingsRule.hpp"
#include "ULumosScalabilitySettingsRulePlatformsHighEnd.hpp"
ULumosScalabilitySettingsRulePlatformsHighEnd* ULumosScalabilitySettingsRulePlatformsHighEnd::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRulePlatformsHighEnd");
    return (ULumosScalabilitySettingsRulePlatformsHighEnd*)res;
}
