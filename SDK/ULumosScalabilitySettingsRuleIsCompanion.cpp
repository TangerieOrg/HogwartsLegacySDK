#include "ULumosScalabilitySettingsRule.hpp"
#include "ULumosScalabilitySettingsRuleIsCompanion.hpp"
ULumosScalabilitySettingsRuleIsCompanion* ULumosScalabilitySettingsRuleIsCompanion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRuleIsCompanion");
    return (ULumosScalabilitySettingsRuleIsCompanion*)res;
}
