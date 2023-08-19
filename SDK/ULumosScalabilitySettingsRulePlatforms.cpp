#include "ULumosScalabilitySettingsRule.hpp"
#include "ULumosScalabilitySettingsRulePlatforms.hpp"
ULumosScalabilitySettingsRulePlatforms* ULumosScalabilitySettingsRulePlatforms::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRulePlatforms");
    return (ULumosScalabilitySettingsRulePlatforms*)res;
}
