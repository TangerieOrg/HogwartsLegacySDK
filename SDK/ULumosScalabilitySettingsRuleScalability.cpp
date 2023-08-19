#include "EPhoenixScalabilityCategory.hpp"
#include "ULumosScalabilitySettingsRule.hpp"
#include "ULumosScalabilitySettingsRuleScalability.hpp"
ULumosScalabilitySettingsRuleScalability* ULumosScalabilitySettingsRuleScalability::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRuleScalability");
    return (ULumosScalabilitySettingsRuleScalability*)res;
}
