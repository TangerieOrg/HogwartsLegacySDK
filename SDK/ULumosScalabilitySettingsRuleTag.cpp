#include "ULumosScalabilitySettingsRule.hpp"
#include "ULumosScalabilitySettingsRuleTag.hpp"
ULumosScalabilitySettingsRuleTag* ULumosScalabilitySettingsRuleTag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRuleTag");
    return (ULumosScalabilitySettingsRuleTag*)res;
}
